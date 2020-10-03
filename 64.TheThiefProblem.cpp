#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMaxVal(int arr[], int n, int k)
{
    sort(arr, arr + n, greater<int>());
    int res = 0;
    for (int i = 0; i < k; i++)
        res += arr[i];
    return res;
}

int main()
{
    int arr[] = {3, 7, 2, 5, 12, 30};
    cout << getMaxVal(arr, 6, 3) << endl;

    return 0;
}