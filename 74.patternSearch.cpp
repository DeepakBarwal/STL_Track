#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void patSearch(const string &txt, const string &pat)
{
    int pos = txt.find(pat);
    while (pos != string::npos)
    {
        cout << pos << " ";
        pos = txt.find(pat, pos + 1);
    }
}

int main()
{
    string txt = "geeks for geeks";
    string pat = "geeks";
    patSearch(txt, pat);

    return 0;
}