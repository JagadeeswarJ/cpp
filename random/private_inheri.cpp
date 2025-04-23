#include <iostream>
using namespace std;
class B
{
    int x;

public:
    B(int _x) : x(_x) {}
    int fun() { return x; }
};
class D : public B
{
    int y;

public:
    D(int _x, int _y) : B(_x), y(_y) {} // LINE-1
    void fun() { cout << B::fun() << y; }
    // can't access x here directly, cause it not accessible, in private inheritance
};
int main()
{
    D *b2 = new D(1, 0);
    b2->fun();
    return 0;
}