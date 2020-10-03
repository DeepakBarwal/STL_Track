#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // // bad way. no seed. generates same random numbers every time
    // for (int i = 0; i < 5; i++)
    //     cout << rand() << " ";

    // srand(time(NULL));
    // for (int i = 0; i < 5; i++)
    //     cout << rand() << " ";

    // // Generating random numbers in a range from 0 to 99
    // srand(time(NULL));
    // for (int i = 0; i < 5; i++)
    //     cout << rand() % 100 << " ";

    // Generating random numbers in a range
    srand(time(NULL));
    int low = 10, high = 100;
    int range = high - low + 1;
    for (int i = 0; i < 5; i++)
        cout << (rand() % range) + low << " ";

    return 0;
}