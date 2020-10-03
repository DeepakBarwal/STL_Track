#include <iostream>
#include <set>

using namespace std;

struct Test
{
    int x;
    bool operator<(const Test &t) const
    {
        return (this->x < t.x);
    }
};

int main()
{
    // set<int> s; // increasing
    // set<int, greater<int>> s; // decreasing
    // s.insert(10);
    // s.insert(5);
    // s.insert(5);  // duplicate ignored
    // s.insert(10); // duplicate ignored
    // s.insert(20);
    // s.insert(7);
    // auto it = s.find(7);
    // s.erase(it, s.end());
    // s.clear();
    // cout << s.size();
    // auto it = s.find(100); // returns iterator
    // if (it == s.end())
    //     cout << "Not found";
    // else
    //     cout << "Found";
    // if (s.count(10))
    //     cout << "Found";
    // else
    //     cout << "Not found";
    // for (int x : s)
    //     cout << x << " ";
    // for (auto it = s.begin(); it != s.end(); it++)
    //     cout << (*it) << " ";
    // auto it = s.lower_bound(5); // smallest greatest if element not present
    // auto it = s.upper_bound(5); // smallest greatest
    // if (it != s.end())
    //     cout << (*it) << " ";
    // else
    //     cout << "Given element is greater than the largest";
    set<Test> s;
    s.insert({5});
    s.insert({20});
    s.insert({10});
    for (Test t : s)
        cout << t.x << " ";
    cout << endl;
    return 0;
}