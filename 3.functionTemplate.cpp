#include <iostream>

using namespace std;

template <typename T>
T arrMax(T arr[], int n)
{
    T res = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > res)
            res = arr[i];
    return res;
}

int main()
{
    int arr1[] = {10, 20, 30};
    float arr2[] = {10.3, 12.23, 12.235};
    cout << arrMax<int>(arr1, 3) << endl;
    cout << arrMax<float>(arr2, 3) << endl;
}