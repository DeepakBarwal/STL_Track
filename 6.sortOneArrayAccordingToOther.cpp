#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

void sortChar(int a[], char b[], int n)
{
    pair<int, char> pa[n];
    for (int i = 0; i < n; i++)
        pa[i] = {a[i], b[i]};
    sort(pa, pa + n);
    for (int i = 0; i < n; i++)
        cout << pa[i].second << " ";
    cout << endl;
}

int main()
{
    int a[] = {4, 1, 3, 2};
    char b[] = {'A', 'X', 'B', 'Y'};
    sortChar(a, b, 4);
}