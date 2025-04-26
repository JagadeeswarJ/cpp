#include <iostream>
#include <iomanip>
#include <cmath>   //for sqrt => to use c header files=> with prefix c and without .h
#include <cstring> // for strlen => to use c header files=> with prefix c and without .h
#include <cstdio>  // for printf and scanf => faster than cout and cin =>to use c header files=> with prefix c and without .h
#include <vector>

using namespace std;
using ll = long long;

int main()
{
    short age[4] = {0};
    cout << sizeof(age[0]) << endl; // default precision is 5,no.of digs after decimal point
    cout << fixed;                  // fixed is used to set the precision to 5 digits after decimal point
    vector<int> arr(5);             // vector of size 4 with all elements initialized to 0
    cout << arr.size() << endl;     // size of arr is 0
    arr.resize(10);                 // resize the vector to size 10
    cout << arr.size() << endl;     // size of arr is 0
    // string is a type in c++ which is used to store strings
    // direct concat with + operator
    // string str = "hello" + 4;    // to_string is used to convert int to string
    cout << "hello" + 4 << endl;           // move 4 chars in hello,hello is a string literal.which is pointer to first char of hello
    string str = "hello" + to_string(123); // to_string is used to convert int to string
    cout << str << endl;                   // move 4 chars in hello,hello is a string literal.which is pointer to first char of hello
    // =,>=,.... can be used to instead of strcpy

    // cout << "hello" >= "hi" << endl;
    // cout << "hello" >= "hi" << endl; // this will give error because we cannot compare string literals directly
    // to compare  lexicographically use string
    cout << (string("hello") >= string("hi")) << endl; // this will give 1 because hello is greater than hi lexicographically
    // or
    string str1 = "hello";
    string str2 = "hi";
    cout << (str1 >= str2) << endl; // this will give 1 because hello is greater than hi lexicographically
    return 0;
}