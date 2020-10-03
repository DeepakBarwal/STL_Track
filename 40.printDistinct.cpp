#include <iostream>
#include <unordered_set>

using namespace std;

void printDist(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end())
        {
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }
}

int main()
{
    int arr[] = {10, 8, 10, 10, 7};
    printDist(arr, 5);
    cout << endl;

    return 0;
}