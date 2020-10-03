#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // vector<int> v = {30, 20, 5, 10, 6, 10, 10};
    // cout << count(v.begin(), v.end(), 10) << endl;

    string s = "geeksforgeeks";
    cout << count(s.begin(), s.end(), 'g') << endl;

    return 0;
}