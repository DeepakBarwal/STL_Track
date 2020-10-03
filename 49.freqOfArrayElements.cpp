#include <iostream>
#include <unordered_map>

using namespace std;

void printFreq(int arr[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    for (auto x : m)
        cout << x.first << " " << x.second << endl;
}

int main()
{
    int arr[] = {10, 5, 20, 5, 10, 5};
    printFreq(arr, 6);

    return 0;
}