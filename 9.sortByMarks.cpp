#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool myCmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second > p2.second;
}

void printSortedByMarks(int roll[], int marks[], int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({roll[i], marks[i]});
    sort(v.begin(), v.end(), myCmp);
    for (int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << endl;
}

int main()
{
    int roll[] = {103, 105, 101};
    int marks[] = {70, 80, 40};
    printSortedByMarks(roll, marks, 3);

    return 0;
}