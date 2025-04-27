#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    cout << (x += 5, x * 5) << endl;
    return 0;
}