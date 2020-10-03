#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    // vector<int> v = {5, 10, 7, 10, 20};
    // auto it = find(v.begin(), v.end(), 10);
    // if (it != v.end())
    //     cout << "Found at " << (it - v.begin()) << endl;
    // else
    //     cout << "Not Found" << endl;

    // int arr[] = {5, 10, 12, 8, 7, 3};
    // int *ptr = find(arr, arr + 6, 7);
    // if (ptr == (arr + 6))
    //     cout << "Not Found" << endl;
    // else
    //     cout << "Found at " << (ptr - arr) << endl;

    list<int> l = {5, 10, 12, 8, 7, 3};
    auto it = find(l.begin(), l.end(), 10);
    if (it == l.end())
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;

    return 0;
}