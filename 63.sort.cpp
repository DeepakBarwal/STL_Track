#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point
{
    int x, y;
};

bool myCmp(Point p1, Point p2)
{
    return (p1.x < p2.x);
}

int main()
{
    // int arr[] = {10, 20, 5, 7};
    // sort(arr, arr + 4);
    // for (int x : arr)
    //     cout << x << " ";
    // cout << endl;
    // sort(arr, arr + 4, greater<int>());
    // for (int x : arr)
    //     cout << x << " ";
    // cout << endl;

    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    sort(arr, arr + 3, myCmp);
    for (auto i : arr)
        cout << i.x << " " << i.y << endl;

    return 0;
}