#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265358979323846 // Define a constant for PI
using namespace std;
static volatile int x;
inline int add(int a, int b) { return a + b; }
// cpp doesn'r allow to define a function with the same name as a variable in the same scope

int main()
{
    const int a = 5; // Declare a constant integer variable 'a' and initialize it to 5
    // const int d;// is error cuz, const must be initialized
    cout << "Hello, World!" << endl;
    // a = 0; // Uncommenting this line would cause a compilation error because 'a' is a constant,assingment to read only variable
    cout << a << endl; // Output the value of 'a' to the console

    cout << setprecision(10); // Set the precision for floating-point output to 10 decimal places
    cout << fixed;            // Use fixed-point notation for floating-point output
                              //     ⚠️ Without fixed(fixed-point notation:):
                              // It shows 10 significant digits, not 10 digits after the decimal.
    cout << 4 * atan(1) << endl;

    const double pi = 4.0 * atan(1.0); // Calculate the value of pi using the arctangent function
    cout << pi << endl;                // Output the value of pi to the console
    cout << exp(1) << endl;            // Output the value of e^1 (Euler's number) to the console
    // #define is manifest constant, not type safe
    int m = 4;
    const int n = 5;
    const int *p = &n;
    p = &m;
    cout << *p << endl; // Output the value pointed to by 'p' (which is the value of 'n') to the console
    cout << m << endl;  // Output the value of 'm' to the console
    // int *p = &n;
    int k = 1;
    const int *p1 = &k;
    k = 2;
    cout << k << endl;
    cout << *p1 << endl; // Output the value pointed to by 'p' (which is the value of 'k') to the console
    // *p1 = 1; // Uncommenting this line would cause a compilation error because 'p1' is a pointer to a constant integer, and we cannot change the value it points to, even though it points to a non-constant integer
    x = 0;
    cout << x << endl;
    int f = 3;
    cout << (++f) * (++f) << endl;

    // volatile
    volatile int y = 0; // Declare a volatile integer variable 'y' and initialize it to 0
    y = 1;
    // while(y!=100) ;
    //     Being volatile, i can be changed by hardware anytime. It waits till the value becomes 100
    // (possibly some hardware writes to a port).

    // Assign the value 1 to 'y'
    // if used in infinite loop, it will not be optimized out by the compiler, so compiler always checks
    // inline function -> just a suggestion to the compiler
    // The inline 'add' function is defined globally.
    cout << add(1, 2) << endl; // Output the result of calling the 'add' function with arguments 1 and 2 to the console
    cout << add(1, 2) << endl; // Output the result of calling the 'add' function with arguments 1 and 2 to the console
    // NUll is a manifest constant set to 0
    // cout << NULL;//just gives a warning and outputs zero
    const int n1 = 1;
    // int *p1 = &n1;//const int can only be pointed by const int*
    int m2 = 2;
    int *const p2 = &m2;
    m2 = 3;
    *p2 = 4;
    // p1 = &f;//connot change point
    // const int* const p = &n//const pointer to const pointee
    // non-static const should be initialized

    // INLINE FUNCTION:
    // inline in a request to compiler, mey not inline large bodies
    // This can reduce overhead from function calls — especially for small, frequently used functions.
    // they solve the problem of #define for functions, we get unexpected answer:
    // #define : syntactic and semantic pitfalls, also inline has type checking
    return 0;
}
