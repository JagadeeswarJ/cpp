#include <bits/stdc++.h>
using namespace std;

void counter()
{
    // static variable is a variable that retains its value between function calls
    static int count = 0; // static variable
    count++;
    cout << "Count: " << count << endl;
}
class Example
{
public:
    // shared across all objects of the class
    static int x; // if we initialize here, must use const&, if not, must define outside the classm using scope resolution operator
};

class Example2
{
public:
    Example2()
    {
        cout << "Constructor called" << endl;
    }
    ~Example2()
    {
        cout << "destructor called" << endl;
    }
};

int Example::x = 0; // static variable, Define and initialize it outside the class:
int main()
{
    counter();
    counter();
    counter();
    cout << " Static variable in class" << endl;
    Example e1;
    Example e2;
    Example e3;
    cout << e1.x++ << endl;
    cout << e2.x++ << endl;
    cout << e3.x++ << endl;
    cout << "When is destructor , called, for static and non static objects" << endl;
    int a = 0;
    if (!a)
    {
        // Example2 e4;
        static Example2 e4;
        cout << "Inside if block" << endl;
    }

    cout << "Code ending" << endl;
    return printf("Hello World\n") != 2;
    // destructor is called after return 0,
}