#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <unordered_map>

using namespace std;

struct myCmp
{
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first > p2.first;
        return p1.second < p2.second;
    }
};

void printKFrequent(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    priority_queue<pair<int, int>, vector<pair<int, int>>, myCmp> pq(m.begin(), m.end());
    for (int i = 0; i < k; i++)
    {
        cout << pq.top().first << " ";
        pq.pop();
    }
}

int main()
{
    int arr[] = {10, 20, 10, 20, 30, 30, 10};
    printKFrequent(arr, 7, 2);
    cout << endl;

    return 0;
}