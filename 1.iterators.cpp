#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int>::iterator i = v.begin(); // auto i
    // cout << (*i) << " ";
    // i++;
    // cout << (*i) << " ";
    // i = v.end();
    // i--;
    // cout << (*i) << " ";
    // i = next(i); // next() returns an iterator
    // cout << (*i) << " ";
    // i = next(i, 2);
    // cout << (*i) << " ";
    // i = prev(i);
    // cout << (*i) << " ";
    advance(i, 3); // advance modifies the same iterator
    cout << (*i) << " ";
    return 0;
}