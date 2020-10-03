#include <iostream>
#include <utility>

using namespace std;

int main()
{
    // pair<int, int> p1(10, 20); // or
    // pair<int, int> p1;
    // // p1 = {10, 20}; // or
    // p1 = make_pair(10, 20); // redundant
    // pair<int, string> p2(100, "gfg");
    // cout << p1.first << " " << p1.second << endl;
    // cout << p2.first << " " << p2.second << endl;
    pair<int, int> p1(1, 12), p2(9, 12);
    cout << (p1 == p2) << " "
         << (p1 != p2) << " "
         << (p1 > p2) << " "
         << (p1 < p2) << endl;
    return 0;
}