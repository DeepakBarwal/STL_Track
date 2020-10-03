#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxGuests(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i = 1, j = 0, res = 1, curr = 1;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res = max(res, curr);
    }
    return res;
}

int main()
{
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    cout << maxGuests(arr, dep, 6) << endl;

    return 0;
}