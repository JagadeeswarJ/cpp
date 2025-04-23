#include <iostream>
using namespace std;
class base
{
public:
    void print() { cout << "C" << " "; }
};
class derived : public base
{
public:
    void print() { cout << "C++" << " "; }
};
int main()
{
    base *a1 = new base();
    base *b1 = new derived();
    // non -vrtual function, so base class function is called because of pointer type decide at compile time
    a1->print();
    b1->print();
    cout << endl;
    return 0;
}