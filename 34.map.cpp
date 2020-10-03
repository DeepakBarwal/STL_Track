#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string, greater<int>> m;
    m.insert({10, "practice"});
    m.insert({5, "gfg"});
    m.insert({2, "ide"});
    // m[5] = 100;
    // m.insert({3, 300});
    // m.insert({3, 600}); // ignored
    // m[10] = 100; // works as both insert and find
    // m.at(10) = 100; // throws exception if key not present
    // cout << m.size() << endl;
    // cout << m[20] << endl; // if item is not present, it is inserted
    // cout << m.size() << endl;
    // for (auto &x : m)
    //     cout << x.first << " " << x.second << endl;
    // for (auto it = m.begin(); it != m.end(); it++)
    //     cout << (*it).first << " " << (*it).second << endl;
    // m.clear();
    // cout << m.size() << endl;
    // if (m.find(3) == m.end())
    //     cout << "Not found" << endl;
    // else
    //     cout << "found" << endl;
    // for (auto it = m.find(2); it != m.end(); it++)
    //     cout << (*it).first << " " << (*it).second << endl;
    // if (m.count(3) == 0) // returns 1 or 0 (size_t)
    //     cout << "Not found" << endl;
    // else
    //     cout << "Found" << endl;
    // auto it = m.lower_bound(3); // same key or next key in inc./dec. order
    // if (it != m.end())
    //     cout << (*it).first << endl;
    // else
    //     cout << "No equal or greater value" << endl;
    // auto it = m.upper_bound(5); // next key in inc./dec. order
    // if (it != m.end())
    //     cout << (*it).first << endl;
    // else
    //     cout << "No greater value" << endl;
    cout << m.size() << endl;
    // m.erase(5);
    // m.erase(m.find(5));
    m.erase(m.find(5), m.end());
    cout << m.size() << endl;

    return 0;
}