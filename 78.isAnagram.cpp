#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isAnagram(const string &s1, const string &s2)
{
    int n1 = s1.length(), n2 = s2.length();
    if (n1 != n2)
        return false;
    int count[256] = {0};
    for (int i = 0; i < n1; i++)
        count[s1[i]]++;
    for (int i = 0; i < n2; i++)
        count[s2[i]]--;
    for (int i = 0; i < 256; i++)
        if (count[i] != 0)
            return false;
    return true;
}

int main()
{
    string s1 = "abacbcc", s2 = "cccbaab";
    cout << boolalpha << isAnagram(s1, s2) << endl;

    return 0;
}