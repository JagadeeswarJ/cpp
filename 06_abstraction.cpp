#include <bits/stdc++.h>
using namespace std;

// becomes abstract class, since it has atleast one pure virtual function
class Shape
{
    // atleast one pure virtual function
public:
    virtual void draw() = 0; // pure virtual function\
    // umimplimented pure virtual function can't be called
    // The = 0 indicates that the function is purely virtual and does not have a body in the base class
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

int main()
{
    cout << "Abstraction" << endl;
    // Abstraction is the concept of hiding the complex implementation details and showing only the essential features of the object.
    // hide details of the implementation,
    // one way is ,access modifirs
    // private, protected, public

    // another way is to use abstract classes
    // abstract class is a class that has at least one pure virtual function
    // pure virtual function is a function that has no implementation in the base class
    // object of abstract class is not created
    Circle c;
    c.draw();
    return 0;
}