#include <iostream>
using namespace std;

class Parent
{
public:
    Parent() { cout << "Parent Constructor\n"; }

    void show()
    {
        cout << "Parent show()\n";
    }
    virtual ~Parent() { cout << "Parent Destructor\n"; }
    // This enables runtime polymorphism (dynamic dispatch) for the destructor.
    // When you call delete p1;, the program looks up the actual type of the object (which is Child), and calls the most derived destructor, followed by the base destructor.
};

class Child : public Parent
{
public:
    Child() { cout << "Child Constructor\n"; }

    void show()
    {
        cout << "Child show()\n";
    }

    ~Child() { cout << "Child Destructor\n"; }
};

int main()
{
    Parent *p1 = new Child(); // Upcasting
    p1->show();               // Which show() gets called?
    delete p1;                // Which destructors get called?
    return 0;
}
