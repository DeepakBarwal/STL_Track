#include <iostream>
#include <map>

using namespace std;

multimap<int, string> m;

void addItem(int p, string s)
{
    m.insert({p, s});
}

void find(int p)
{
    auto ip = m.equal_range(p);
    for (auto it = ip.first; it != ip.second; it++)
        cout << it->second << " " << it->first << endl;
}

void printSorted()
{
    for (auto x : m)
        cout << x.second << " " << x.first << endl;
}

void printGreaterSorted(int p)
{
    auto it = m.upper_bound(p);
    while (it != m.end())
    {
        cout << it->second << " " << it->first << endl;
        it++;
    }
}

void printSmallerSorted(int p)
{
    auto it1 = m.lower_bound(p);
    for (auto it2 = m.begin(); it2 != it1; it2++)
        cout << it2->second << " " << it2->first << endl;
}

int main()
{
    addItem(10, "abc");
    addItem(20, "bcd");
    addItem(5, "cde");
    addItem(10, "efg");
    addItem(20, "ghi");
    // printSorted();
    // find(20);
    // printGreaterSorted(10);
    printSmallerSorted(20);

    return 0;
}