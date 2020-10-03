#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int purchaseMax(int arr[], int n, int sum)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);
    int res = 0;
    while (sum >= 0 && pq.empty() == false && pq.top() <= sum)
    {
        sum = sum - pq.top();
        pq.pop();
        res++;
    }
    return res;
}

int main()
{
    int cost[] = {1, 12, 5, 111, 200};
    cout << purchaseMax(cost, 5, 10) << endl;

    return 0;
}