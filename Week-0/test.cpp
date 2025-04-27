#include <iostream>
using namespace std;

int main()
{
    typedef double num[3];
    num array[5] = {1, 2, 3, 4, 5, 6};
    printf("%u", sizeof(array));
    printf(" %.2f", array[1][1]); // LINE-I
    cout << endl;
    for (const auto &x : array)
    {
        for (const auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}