#include <iostream>
#include <string>
#include <stack>

using namespace std;

void reverse(string &str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
        s.push(str[i]);
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = s.top();
        s.pop();
    }
}

int main()
{
    string str = "geeks";
    reverse(str);
    cout << str << endl;

    return 0;
}