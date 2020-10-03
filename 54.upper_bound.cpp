#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 20, 20, 30, 40};
    auto it = upper_bound(v.begin(), v.end(), 20);
    // cout << (*it) << " " << (it - v.begin()) << endl;
    // it = upper_bound(v.begin(), v.end(), 30);
    // cout << (*it) << " " << (it - v.begin()) << endl;

    // finding last occurrence of 20
    if (it != v.begin() && (*(it - 1) == 20))
        cout << "Found at " << ((it - 1) - v.begin()) << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}