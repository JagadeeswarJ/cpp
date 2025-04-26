#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// Default values are specified while prototyping the function
// void IdentityFunction(int  = 10); // OK
// and not while defining the function.
// Default values are specified in the function prototype only once
int IdentityFunction(int a = 10)
{
    return (a);
}
int Add(int a = 10, int b = 20)
{
    return (a + b);
}
// • All parameters to the right of a parameter with default argument must have default
// arguments (function f violates)
// void f(int, double = 0.0, char *);//error
// • Default arguments cannot be re-defined (second signature of function g violates)
// void g(int, double = 0, char * = NULL); // OK
// void g(int, double = 1, char * = NULL)
// • All non-defaulted parameters needed in a call (first call of g() violates)
// • Default arguments are evaluated at the time of function call (not at the time of function definition)

// Two functions having the same signature but different return types cannot be overloaded
// int Area(int a, int b) { return (a * b); }
// double Area(int a, int b) { return (a * b); }

int main()
{
    cout << "Default Params" << endl;
    cout << IdentityFunction() << endl;
    cout << IdentityFunction(1) << endl;

    int x = 5, y = 6, z;
    z = Add(x, y); // Usual function call -- a = x = 5 & b = y = 6
    cout << "Sum = " << z << endl;
    z = Add(x); // One parameter defaulted -- a = x = 5 & b = 20
    cout << "Sum = " << z << endl;
    z = Add(); // Both parameter defaulted -- a = 10 & b = 20
    cout << "Sum = " << z << endl;
    // Area(1, 1);

    return 0;
}
