#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, int> mp; // non-decreasing
    mp.insert({10, 5});
    mp.insert({50, 1});
    mp.insert({20, 2});
    mp.insert({20, 3});
    // auto it1 = mp.lower_bound(20),
    //      it2 = mp.upper_bound(20);
    // cout << (*it1).first << endl;
    // cout << (*it2).first << endl;
    auto it = mp.equal_range(20); // returns a pair of iterators
    for (auto itr = it.first; itr != it.second; itr++)
        cout << itr->first << " " << itr->second << endl;
    // cout << mp.count(10) << endl;
    // mp.erase(10);
    // cout << mp.count(10) << endl;
    // for (auto x : mp)
    //     cout << x.first << " " << x.second << endl;

    return 0;
}