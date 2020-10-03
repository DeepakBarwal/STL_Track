#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void printKLargest(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + k);
    for (int i = k; i < n; i++)
    {
        if (arr[i] > pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

int main()
{
    int arr[] = {5, 15, 10, 20, 8};
    printKLargest(arr, 5, 2);
    cout << endl;

    return 0;
}