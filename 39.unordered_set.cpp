#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(5); // ignores duplicate
    // for (auto x : s)
    //     cout << x << " ";
    // for (auto it = s.begin(); it != s.end(); it++)
    //     cout << (*it) << " ";
    // cout << endl;
    // cout << s.size() << endl;
    // s.erase(15);
    // auto it = s.find(10);
    // s.erase(it);
    // s.erase(s.begin(), s.end());
    // s.clear();
    // cout << s.size() << endl;
    // if (s.find(15) == s.end())
    //     cout << "Not Found" << endl;
    // else
    //     cout << "Found" << endl;
    // if (s.count(15))
    //     cout << "Found" << endl;
    // else
    //     cout << "Not Found" << endl;

    return 0;
}