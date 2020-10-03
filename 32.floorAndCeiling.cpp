#include <iostream>
#include <set>
#include <climits>

using namespace std;

set<int> s;

void Insert(int x)
{
    s.insert(x);
}

bool Search(int x)
{
    return (s.find(x) != s.end());
}

void Delete(int x)
{
    s.erase(x);
}

int getCeiling(int x)
{
    auto it = s.lower_bound(x);
    if (it == s.end())
        return INT_MAX;
    else
        return *it;
}

int getFloor(int x)
{
    auto it = s.lower_bound(x);
    if (it == s.begin())
    {
        if (*it == x)
            return *it;
        else
            return INT_MIN;
    }
    else
    {
        if (it != s.end() && *it == x)
            return *it;
        it--;
        return *it;
    }
}

int main()
{
    Insert(5);
    Insert(10);
    Insert(15);
    Insert(20);
    cout << getCeiling(21) << endl;
    cout << getFloor(2100) << endl;

    return 0;
}