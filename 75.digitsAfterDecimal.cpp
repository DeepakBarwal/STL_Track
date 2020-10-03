#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string digitsAfterDecimal(const string &no)
{
    int pos = no.find('.');
    if (pos == string::npos)
        return "";
    else
        return no.substr(pos + 1);
}

int main()
{
    string str = "12.5318";
    cout << digitsAfterDecimal(str) << endl;

    return 0;
}