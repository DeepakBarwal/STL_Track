#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

int getLongest(int arr[], int n)
{
    int res = 0;
    int curr = 0;
    unordered_set<int> h;
    for (int i = 0; i < n; i++)
        h.insert(arr[i]);
    for (int i = 0; i < n; i++)
    {
        if (h.find(arr[i] - 1) == h.end())
        {
            curr = 1;
            while (h.find(arr[i] + curr) != h.end())
                curr++;
            res = max(res, curr);
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 9, 20};
    cout << getLongest(arr, 6) << endl;

    return 0;
}