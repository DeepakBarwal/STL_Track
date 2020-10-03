#include <iostream>
#include <map>
#include <string>

using namespace std;

map<int, string> m;

void add(int price, string name)
{
    m[price] = name;
}

string find(int price)
{
    auto res = m.find(price);
    if (res == m.end())
        return "";
    else
        return res->second;
}

void priceSorted()
{
    for (auto x : m)
        cout << x.second << " " << x.first << endl;
}

void printGreaterSorted(int price)
{
    auto it = m.upper_bound(price);
    while (it != m.end())
    {
        cout << it->second << " " << it->first << endl;
        it++;
    }
}

void printSmallerSorted(int price)
{
    auto it1 = m.lower_bound(price);
    for (auto it2 = m.begin(); it2 != it1; it2++)
        cout << it2->second << " " << it2->first << endl;
}

int main()
{
    add(10, "abc");
    add(5, "xyz");
    add(100, "pqr");
    cout << find(5) << endl;
    printGreaterSorted(7);
    printSmallerSorted(20);

    return 0;
}