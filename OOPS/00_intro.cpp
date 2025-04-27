#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Complex
{
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator+(Complex const &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    (Complex(1, 2) + Complex(3, 4)).display();
    return 0;
}
