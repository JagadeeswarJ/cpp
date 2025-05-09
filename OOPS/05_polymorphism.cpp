#include <bits/stdc++.h>
using namespace std;
class Print
{
public:
    void show(int a)
    {
        cout << "Integer: " << a << endl;
    }
    void show(string a)
    {
        cout << "String" << a << endl;
    }
};
class Complex
{
public:
    int real;
    int imag;
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c)
    {
        Complex temp(0, 0);
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    // use dummy int for postfix increment
    Complex operator++(int)
    {
        Complex temp(0, 0);
        temp.real = ++real;
        temp.imag = ++imag;
        return temp;
    }
    void display()
    {
        cout << "Real: " << real << " Imaginary: " << imag << endl;
    }
};

class Parent
{
public:
// virtual function is a fucntion that u expect to be redefined in derived class
// defined in base class, overridden in child class
     void show()
    {
        cout << "Parent class" << endl;
    }
};
class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class" << endl;
    }
};

int main()
{
    cout << "Polymorphism" << endl;
    // Polymorphism: ability to take many forms
    // 1. Compile time polymorphism (function overloading, operator overloading)
    Print p;
    p.show(5);
    p.show("Hello");
    // Ope Overloading: defining the behavior of operators for user-defined types
    Complex c1(10, 5);
    Complex c2(20, 10);
    Complex c3 = c1 + c2; // c3 = c1.operator+(c2)
    c3.display();
    c3 = c3++;
    c3.display();
    // this is compile time polymorphism
    // 2. Run time polymorphism (function overriding)
    cout << "Run time polymorphism:\nfunction overriding" << endl;
    Child c;
    c.show(); // Parent class
    Parent *p1 = new Child();
    // runtime polymorphism through function overriding is achieved using virtual functions.
    p1->show(); // Child class
    Child *c15 = new Child();
    c15->show(); // Child class
    // Function Overloading: same function name with different parameters
    // Function Overriding: same function name in base and derived class
    // Operator Overloading: defining the behavior of operators for user-defined types
    // Operator Overloading: defining the behavior of operators for user-defined types
    // Operator Overloading: defining the behavior of operators for user-defined types
    return 0;
}