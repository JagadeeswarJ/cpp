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
    // This is called name hiding in C++., but is function is called via a base class pointer, it will call the base class function.
    //  So base::f1() is not visible in derived unless you explicitly bring it in., using base::f1;

    // class base{
    // int a;
    // public:
    // base(int i) : a(i) {}
    // virtual void test(base *) { cout << a << endl; }
    // };
    // class derived : public base{
    // int b;
    // public:
    // derived(int i=0, int j=0) : base(i), b(j) { }
    // void test(derived *) { cout << b << endl; }
    // };
    // int main(){
    // base *t1 = new derived(5,9);
    // t1->test(new derived); //Line-1
    // return 0;
    // }
    // Because the pointer was of type base*, and in C++, name hiding affects derived class scope, not the base class's interface when called via a base pointer.
    return 0;
}