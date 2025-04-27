#include <iostream>
#include <iomanip>
#include <cmath>   //for sqrt => to use c header files=> with prefix c and without .h
#include <cstring> // for strlen => to use c header files=> with prefix c and without .h
#include <cstdio>  // for printf and scanf => faster than cout and cin =>to use c header files=> with prefix c and without .h

// cout and cin are within std namespace
using namespace std;
using ll = long long;

int main()
{
    cout << sqrt(6) << endl; // default precision is 5,no.of digs after decimal point
    cout << fixed;          // fixed is used to set the precision to 5 digits after decimal point
    cout << ("1231" == "1231");
    cout << setprecision(20) << sqrt(6) << endl; // set precision to 20
    // sqrt is in cmath library
    cout << sqrt(6);
    int x;

    cin >> x;
    cout << x << endl;

    char str[10];                         // char array
    cout << "LEN" << strlen(str) << endl; // strlen is in cstring library,WITHOUT initialization leads to undefined behavioiur
    return 0;
}