#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    // forward_list<int> l = {10, 15, 20};
    // l.push_front(5);
    // l.push_front(3);
    // l.pop_front();
    // for (int x : l)
    //     cout << x << " ";
    // cout << endl;

    // forward_list<int> l;
    // l.assign({10, 20, 30, 10});
    // forward_list<int> l2;
    // l2.assign(l.begin(), l.end());
    // l.remove(10);
    // l.assign(5, 10);
    // for (auto it = l.begin(); it != l.end(); it++)
    //     cout << (*it) << " ";

    // forward_list<int> l1 = {15, 20, 30};
    // auto it = l1.insert_after(l1.begin(), 10);
    // it = l1.insert_after(it, {2, 3, 5});
    // it = l1.emplace_after(it, 40); // optimised insert_after
    // // it = l1.erase_after(it);
    // it = l1.erase_after(it, l1.end());
    // for (int x : l1)
    //     cout << x << " ";

    //clear(), empty(), reverse(), merge(), sort()
}