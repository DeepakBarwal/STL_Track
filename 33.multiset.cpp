#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> ms;
    // ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(10);
    ms.insert(40);
    // ms.erase(10);
    // cout << ms.count(10);
    // for (auto x : ms)
    //     cout << x << " ";
    // auto it = ms.lower_bound(20);
    // auto it2 = ms.upper_bound(20);
    // cout << (*it) << " " << (*it2);
    auto it = ms.equal_range(20); // pair<multiset<int>::iterator, multiset<int>::iterator>
    cout << *it.first << " " << *it.second;
    cout << endl;

    return 0;
}