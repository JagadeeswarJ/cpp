#include <iostream>
using namespace std;
class base
{
public:
    int x;
    void print() { cout << "C" << " "; }
};
class derived : public base
{
public:
    int y;
    void print(int i) { cout << "C++" << " "; }
};
int main()
{
    base *a1 = new base();
    // The compiler knows how to convert a derived* to a base* automatically — it's called upcasting, and it's always safe.
    // but reverse is not true, so we need to use downcasting.
    base *b1 = new derived();
    // ✅ compiler just takes the address of base part (start of object), form memory layout
    //   memory layout:
    // +-------+
    // |   x   |  // 4 bytes from base
    // +-------+
    // |   y   |  // 4 bytes for the derived class member
    // +-------+
    // non -vrtual function, so base class function is called because of pointer type decide at compile time
    a1->print();
    b1->print();
    cout << endl;
    return 0;
}