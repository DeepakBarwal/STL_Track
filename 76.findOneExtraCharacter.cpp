#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// // Method 1: Sorting. O(nlogn)
// char findExtra(string s1, string s2)
// {
//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());
//     int n = s1.length();
//     for (int i = 0; i < n; i++)
//         if (s1[i] != s2[i])
//             return s2[i];
//     return s2[n];
// }

// Method 2: Use Counting. O(n)
char findExtra(const string &s1, const string &s2)
{
    int count[256] = {0};
    for (char x : s2)
        count[x]++;
    for (char x : s1)
        count[x]--;
    for (int i = 0; i < 256; i++)
        if (count[i] == 1)
            return (char)i;
    return 0;
}

// // Method 3: Use Bitwise Ex-OR. O(n)
// char findExtra(const string &s1, const string &s2)
// {
//     int res = 0;
//     int n = s1.length();
//     for (int i = 0; i < n; i++)
//         res = res ^ s1[i] ^ s2[i];
//     res = res ^ s2[n];
//     return (char)res;
// }

int main()
{
    string s1 = "abacac", s2 = "aaabbcc";
    cout << findExtra(s1, s2) << endl;

    return 0;
}