#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// using max-heap
void mySort1(int arr[], int n)
{
    priority_queue<int> pq(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = pq.top();
        pq.pop();
    }
}
// using min-heap
void mySort2(int arr[], int n)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = pq.top();
        pq.pop();
    }
}

int main()
{
    int arr[] = {10, 5, 20};
    mySort2(arr, 3);
    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}