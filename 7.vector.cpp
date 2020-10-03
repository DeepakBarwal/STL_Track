#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector<int> v{10, 20, 30};
    // for (int &x : v)
    //     x++;
    // for (int x : v)
    //     cout << x << " ";

    // int n = 3, x = 10;
    // vector<int> v(n, x);
    // for (auto it = v.begin(); it != v.end(); it++) // vector<int>::iterator
    //     cout << (*it) << " ";

    // int arr[] = {10, 5, 20};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // vector<int> v(arr, arr + n);
    // for (auto it = v.rbegin(); it != v.rend(); it++) // vector<int>::iterator
    //     cout << (*it) << " ";

    // vector<int> v{10, 5, 20, 15};
    // v.pop_back();
    // v.front() = 100; // front() returns reference
    // v.back() = 200;
    // for (int x : v)
    //     cout << x << " ";

    // auto it = v.insert(v.begin(), 100);
    // v.insert(v.begin() + 2, 200);
    // v.insert(v.begin(), 2, 300);
    vector<int> v2;
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);
    cout << v2.size() << " " << v2.capacity() << endl;
    // v2.insert(v2.begin(), v.begin(), v.begin() + 2);
    // for (int x : v)
    //     cout << x << " ";
    // cout << endl;
    // for (int x : v2)
    //     cout << x << " ";

    // v.erase(v.begin());
    // for (int x : v)
    //     cout << x << " ";
    // cout << endl;
    // v.erase(v.begin(), v.end() - 1);
    // for (int x : v)
    //     cout << x << " ";

    // v.clear();
    // cout << v.size() << " ";
    // if (v.empty() == true)
    //     cout << "Empty" << endl;
    // else
    //     cout << "Empty" << endl;

    // v.resize(3);
    // for (int x : v)
    //     cout << x << " ";
    // cout << endl;
    // v.resize(5);
    // for (int x : v)
    //     cout << x << " ";
    // cout << endl;
    // v.resize(8, 100);
    // for (int x : v)
    //     cout << x << " ";
    // cout << endl;

    return 0;
}