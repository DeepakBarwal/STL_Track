#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    // tuple<string, int, string> t = make_tuple("abc", 10, "xyz");
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
    // get<0>(t) = "pqr"; // returns reference to tuple item
    // cout << get<0>(t) << endl;

    tuple<char, int, int> t('g', 20, 30);
    // cout << tuple_size<decltype(t)>::value << endl; // decltype replaces tuple<char,int,int>. like auto. tuple_size return a structure which has a member called value(size_t type)
    // char x;
    // int y, z;
    // // tie(x, y, z) = t; // tie is used to unpack a tuple
    // tie(x, ignore, z) = t;
    // cout << x << " " << y << " " << z << endl;

    tuple<string, int> t2("abc", 50);
    auto t3 = tuple_cat(t, t2); // concatenates two tuples
    cout << get<0>(t3) << " " << get<2>(t3) << endl;

    return 0;
}