#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

// Function that takes a const reference (read-only)
int ref_const(const int &x)
{
    // x = 10; // ❌ Error: cannot modify a const reference
    return x + 1;
}
void swap(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
int val = 31;
int &getVal()
{
    return val;
}
int main()
{
    // 🔹 Reference basics
    int i = 15;
    int &j = i; // 'j' is a reference (alias) to 'i'

    cout << "Initial i: " << i << endl;
    cout << "Reference j: " << j << endl;

    j = 10; // Changing 'j' changes 'i'
    cout << "After modifying j: i = " << i << endl;

    // 🔹 Invalid: cannot bind non-const reference to rvalue
    // int &r = 10; // ❌ Error

    // 🔹 Valid: const reference can bind to rvalues
    const int &x = 5; // A temporary is created and 'x' refers to it
    cout << "Const reference to rvalue: x = " << x << endl;
    // 🔹 Invalid: can't bind non-const ref to expression result (rvalue)
    // int &k = i + j; // ❌ Error

    int y = 10;
    const int &ref = y;
    cout << ref << endl; // ✅ Okay: reading is allowed
    // ref = 20;         // ❌ Error: cannot modify through const reference

    // 🔹 Swap using pass-by-reference
    int a = 5, b = 10;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b); // Swaps values using references
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // 🔹 Using a const reference parameter in a function
    int c = ref_const(5);
    cout << "Result of ref_const(5): " << c << endl;
    const int a1 = 2;
    const int b1 = 2;

    // int &k = a + b; // is incorrect, cuz in a+b , a is rvalue
    int x1 = 12, x2 = 15;
    swap(x1, x2); // swapping with call by reference
    // A reference parameter may get changed in the called function
    // ##### Use const to stop reference parameter being changed
    // void ref_func(const int &x) {.....
    cout << x1 << " " << x2 << endl;

    // return by reference
    //  ### enables chaining
    getVal() = 12;
    cout << val;
    // ⚠️ Important Rule: Don't return a reference to a local variable(declared in that function)

    // note:
    // For a reference, its referent is fixed,Pointers can point to different variables at different times
    // array of pointer is allowed but array of reference is not

    // reference to array:
    cout << endl;
    int arr[4] = {1, 32, 4, 5};

    int (&refArr)[4] = arr;
    cout << refArr[1];
    refArr[1] = 10;
    cout << refArr[1];

    // reference to vector:
    vector<int> vec = {1, 2, 3};
    vector<int> &refVec = vec;
    // if you don't want to modify the vector but want to avoid copying:
    // void print(const vector<int>& v) {
    //     for (int x : v)
    //         cout << x << " ";
    // }
    return 0;
}
