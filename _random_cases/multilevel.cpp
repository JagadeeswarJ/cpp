#include <iostream>
using namespace std;
class A
{
public:
    A() { cout << "A "; }
    ~A() { cout << "~A "; }
};
class B : public A
{
public:
    B() { cout << "B "; }
    ~B() { cout << "~B "; }
};
class C : public B
{
    B b;

public:
    C() { cout << "C "; }
    ~C() { cout << "~C "; }
};
int main()
{
    C obj;
    // When an object of class C is being instantiated, constructor of class B is called, which will
    // again call constructor of class A that will print A B first. Then the data member of class C is
    // created, which will again print A then print B. Then at last C is printed from the constructor of
    // class C. After the end of main() function, reverse of already printed sequence will be printed
    // from the destructor of the classes. So, the answer is c).
    return 0;
}