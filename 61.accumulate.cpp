#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;

int myfun(int x, int y)
{
    return x * y;
}

int main()
{
    // vector<int> v = {10, 20, 30};
    // int init_res = 0;
    // cout << accumulate(v.begin(), v.end(), init_res) << endl;

    // int init_res = 100;
    // cout << accumulate(v.begin(), v.end(), init_res, minus<int>()) << endl;

    int init_res = 1;
    int arr[] = {10, 20, 30};
    cout << accumulate(arr, arr + 3, init_res, myfun) << endl;

    return 0;
}