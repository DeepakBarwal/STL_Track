#include <iostream>
#include <unordered_set>

using namespace std;

int maxDistinct(int arr[], int n, int k)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    int d = s.size();
    if (d >= n / k)
        return n / k;
    else
        return d;
}

int main()
{
    int arr[] = {1, 1, 2, 1, 3, 1};
    cout << maxDistinct(arr, 6, 2) << endl;

    return 0;
}