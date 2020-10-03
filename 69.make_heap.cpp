#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {15, 6, 7, 12, 30};
    // make_heap(v.begin(), v.end()); // max-heap
    make_heap(v.begin(), v.end(), greater<int>()); // min-heap
    // cout << v.front() << endl;
    // pop_heap(v.begin(), v.end(), greater<int>()); // moves the front to last and heapifies n-1 elements. vector size does not change
    // cout << v.front() << endl;
    // v[4] = 2;                                      // overwrite 6 with 2
    // push_heap(v.begin(), v.end(), greater<int>()); // takes the last element and pushes it into the heap
    // cout << v.front() << endl;
    sort_heap(v.begin(), v.end(), greater<int>());
    for (int x : v)
        cout << x << " ";

    return 0;
}