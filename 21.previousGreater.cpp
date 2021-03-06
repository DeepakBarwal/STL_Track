#include <iostream>
#include <stack>

using namespace std;

void prevGreater(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    cout << -1 << " ";
    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
            s.pop();
        int pg = s.empty() ? -1 : s.top();
        cout << pg << " ";
        s.push(arr[i]);
    }
}

int main()
{
    int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
    prevGreater(arr, 8);

    return 0;
}