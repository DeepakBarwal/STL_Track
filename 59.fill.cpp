#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // vector<int> v = {10, 20, 30, 40};
    // fill(v.begin(), v.end(), 5);
    // for (auto x : v)
    //     cout << x << " ";
    // cout << endl;

    string s = "geeks";
    fill(s.begin(), s.end(), 'g');
    cout << s << endl;

    return 0;
}