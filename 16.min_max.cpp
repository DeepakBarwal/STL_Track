#include <iostream>
#include <deque>

using namespace std;

deque<int> dq;

void insertMin(int x)
{
    dq.push_front(x);
}

void insertMax(int x)
{
    dq.push_back(x);
}

int getMin()
{
    return dq.front();
}

int getMax()
{
    return dq.back();
}

int extractMin()
{
    return dq.pop_front();
}

int extractMax()
{
    return dq.pop_back();
}

int main()
{
    insertMin(5);
    insertMax(10);
    insertMin(5);
    insertMax(15);
    insertMin(2);
    cout << getMin() << endl;
    cout << getMax() << endl;
    insertMin(1);
    insertMax(20);
    cout << extractMin() << endl;
    cout << extractMax() << endl;

    return 0;
}