#include <iostream>
#include <list>

using namespace std;

int main()
{
    // list<int> l;
    // l.push_back(10);
    // l.push_back(20);
    // l.push_front(5);
    // for (int x : l)
    //     cout << x << " ";
    // cout << endl;

    // list<int> l = {10, 2, 5, 20};
    // l.pop_front();
    // l.pop_back();
    // for (auto it = l.begin(); it != l.end(); it++)
    //     cout << (*it) << " ";
    // cout << endl;

    // list<int> l = {10, 20, 30};
    // auto it = l.begin();
    // it++;
    // it = l.insert(it, 15);
    // l.insert(it, 2, 7);
    // l.front() = 1;
    // cout << l.front() << " " << l.back() << endl;
    // cout << l.size() << endl;

    // list<int> l = {10, 20, 30, 40, 20, 40};
    // auto it = l.begin();
    // it = l.erase(it);
    // l.remove(40);
    // for (int x : l)
    //     cout << x << " ";
    // cout << endl;

    // list<int> l1 = {10, 20, 30};
    // list<int> l2 = {5, 15, 25};
    // l1.merge(l2); // merge l2 into l1 and make l2 empty
    // for (int x : l1)
    //     cout << x << " ";
    // cout << endl;

    list<int> l = {10, 15, 15, 20, 20, 10};
    l.unique(); // remove consecutive duplicates
    l.sort();
    l.reverse();
    for (int x : l)
        cout << x << " ";
    cout << endl;

    return 0;
}