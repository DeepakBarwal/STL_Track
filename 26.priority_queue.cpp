#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    // priority_queue<int> pq; // max-heap
    // priority_queue<int, vector<int>, greater<int>> pq; // min-heap
    // pq.push(10);
    // pq.push(15);
    // pq.push(5);
    // cout << pq.size() << " " << pq.top() << endl;
    int arr[] = {10, 5, 15};
    priority_queue<int> pq(arr, arr + 3); // O(n) -> this is better
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}