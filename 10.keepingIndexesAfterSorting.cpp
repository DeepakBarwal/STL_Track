#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

void printSortedWithIndexes(int arr[], int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({arr[i], i}); // make_pair(arr[i], i)
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x.first << " " << x.second << endl;
}

int main()
{
    int arr[] = {100, 50, 20};
    printSortedWithIndexes(arr, 3);

    return 0;
}