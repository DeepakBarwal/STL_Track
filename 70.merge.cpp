#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // vector<int> v1 = {10, 20, 40};
    // vector<int> v2 = {5, 15, 30};
    // vector<int> v3(6);
    // merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    // for (auto x : v3)
    //     cout << x << " ";

    int arr1[] = {10, 20, 30};
    int arr2[] = {5, 15, 40, 80};
    int arr3[7];
    merge(arr1, arr1 + 3, arr2, arr2 + 4, arr3);
    for (int x : arr3)
        cout << x << " ";

    return 0;
}