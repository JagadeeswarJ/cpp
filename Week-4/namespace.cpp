#include <iostream>
using namespace std;
int x = 10;
namespace e
{
    namespace e1
    {
        int x = 15;
    }
    int x = 5;
}
int main()
{
    using e::e1::x; // using declaration, this only will bring the variable x from namespace e1 into the current scope
    cout << x;
    return 0;
}
