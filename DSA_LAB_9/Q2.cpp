#include <iostream>
#include <vector>
using namespace std;

struct MaxHeap
{
    vector<int> h;

    void insert(int x)
    {
        h.push_back(x);
        int i = h.size() - 1;
        while (i > 0 && h[(i - 1) / 2] < h[i])
        {
            swap(h[i], h[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    int extractMax()
    {
        if (h.empty())
            return -1;
        int root = h[0];
        h[0] = h.back();
        h.pop_back();
        heapify(0);
        return root;
    }

    void heapify(int i)
    {
        int largest = i, l = 2 * i + 1, r = 2 * i + 2;
        if (l < h.size() && h[l] > h[largest])
            largest = l;
        if (r < h.size() && h[r] > h[largest])
            largest = r;
        if (largest != i)
        {
            swap(h[i], h[largest]);
            heapify(largest);
        }
    }
};

int main()
{
    MaxHeap pq;
    pq.insert(10);
    pq.insert(40);
    pq.insert(20);
    cout << pq.extractMax();
}
