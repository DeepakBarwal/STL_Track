#include <iostream>
#include <unordered_set>

using namespace std;

void printRepeating(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end())
            s.insert(arr[i]);
        else
            cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 8, 10, 7, 7, 6};
    printRepeating(arr, 6);
    cout << endl;

    return 0;
}