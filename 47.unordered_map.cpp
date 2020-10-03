#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20; // insert key if not present, otherwise return reference to value
    m["ide"] = 30;
    m.insert({"courses", 15});
    // for (auto x : m)
    //     cout << x.first << " " << x.second << endl;
    // if (m.find("ide") != m.end())
    //     cout << "Found" << endl;
    // else
    //     cout << "Not Found" << endl;
    // if (m.count("ide") > 0) // substitute for find. return type is size_t
    //     cout << "Found" << endl;
    // else
    //     cout << "Not Found" << endl;
    // for (auto it = m.begin(); it != m.end(); it++)
    //     cout << it->first << " " << it->second << endl;

    cout << m.size() << endl;
    m.erase("ide");
    m.erase(m.begin(), m.end());
    cout << m.size() << endl;

    return 0;
}