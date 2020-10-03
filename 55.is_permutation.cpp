#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30, 5};
    vector<int> v2 = {20, 10, 5, 30};
    if (is_permutation(v1.begin(), v2.end(), v1.begin()))

        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}