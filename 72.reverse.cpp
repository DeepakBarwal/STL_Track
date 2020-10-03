#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    reverse(v.begin() + 1, v.end());
    for (int x : v)
        cout << x << " ";

    string s = "geeks";
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}