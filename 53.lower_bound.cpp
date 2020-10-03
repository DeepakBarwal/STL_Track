#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // vector<int> v = {10, 20, 20, 20, 30, 40};
    // auto it = lower_bound(v.begin(), v.end(), 50);
    // cout << (*it) << " " << (it - v.begin()) << endl;
    // it = lower_bound(v.begin(), v.end(), 25);
    // cout << (*it) << " " << (it - v.begin()) << endl;

    int arr[] = {10, 20, 20, 20, 30, 40};
    auto it = lower_bound(arr, arr + 6, 20);
    // Binary Search in a sorted array (first occurence)
    if ((it) == (arr + 6) || ((*it) != 20))
        cout << "Not Present" << endl;
    else
        cout << "Present" << endl;

    return 0;
}