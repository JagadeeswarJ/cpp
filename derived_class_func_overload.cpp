#include <iostream>
using namespace std;
class base
{
protected:
    int n1;

public:
    base(int x) : n1(x) {}
    void f1() { cout << ++n1 << endl; }
};
class derived : public base
{
public:
    using base::f1; // Bring in the base class f1() function
    derived(int x) : base(x) {}
    void f1(int a) { cout << ++n1 << endl; }
};
int main()
{
    derived d(10);
    d.f1(); // LINE-1
    // Even though base::f1() exists with no parameters, the moment derived declares a function called f1(int), it hides all overloads of f1() from the base class — even if they have different signatures.
    // So base::f1() is not visible in derived unless you explicitly bring it in.
    return 0;
}