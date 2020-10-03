#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Point
{
    int x, y;
    Point(int i, int j)
    {
        x = i;
        y = j;
    }
};

bool myCmp(Point p1, Point p2)
{
    return p1.x < p2.x;
}

int main()
{
    // vector<int> v = {10, 5, 30, 40, 90, 8};
    // auto it1 = max_element(v.begin(), v.end());
    // auto it2 = min_element(v.begin(), v.end());
    // cout << (*it1) << " " << (*it2) << endl;

    // int arr[] = {5, 6, 20, 90, 4, 8};
    // cout << *max_element(arr, arr + 6) << " " << *min_element(arr, arr + 6) << endl;

    vector<Point> v = {{5, 4}, {2, 300}, {90, 10}};
    auto it = max_element(v.begin(), v.end(), myCmp);
    cout << ((*it).x) << " " << ((*it).y) << endl;
    it = min_element(v.begin(), v.end(), myCmp);
    cout << ((*it).x) << " " << ((*it).y) << endl;

    return 0;
}