#include <iostream>

using namespace std;

template <typename T> // use class instead
struct Pair
{
    T x, y;
    Pair(T i, T j)
    {
        x = i;
        y = j;
    }
    T getX() // T getX();
    {
        return x;
    }
    T getY()
    {
        return y;
    }
};

/*
    template<typename T>
    Pair<T>::getX()
    {
        return x;
    }
*/

int main()
{
    Pair<int> p1(10, 3);
    Pair<float> p2(10.12, 3.32);
    Pair<char> p3('x', 'y');
    cout << p1.getX() << " " << p1.getY() << endl;
    cout << p2.getX() << " " << p2.getY() << endl;
    cout << p3.getX() << " " << p3.getY() << endl;
}