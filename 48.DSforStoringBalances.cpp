#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> m;

int get(int id)
{
    return m[id];
}

void set(int id, int bal)
{
    m[id] = bal;
}

int main()
{
    set(1, 1000);
    set(2, 500);
    set(2, 2000);
    cout << get(1) << " " << get(2) << endl;

    return 0;
}