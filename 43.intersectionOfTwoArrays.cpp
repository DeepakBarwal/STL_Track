#include <iostream>
#include <unordered_set>

using namespace std;

void intersection(int a[], int m, int b[], int n)
{
    unordered_set<int> s;
    for (int j = 0; j < n; j++)
        s.insert(b[j]);
    for (int i = 0; i < m; i++)
        if (s.find(a[i]) != s.end())
            cout << a[i] << " ";
}

int main()
{
    int a[] = {10, 15, 20, 25, 30, 50};
    int b[] = {30, 5, 15, 80};
    intersection(a, 6, b, 4);
    cout << endl;

    return 0;
}