#include <iostream>
using namespace std;
class classA
{
public:
    classA() { cout << "A "; }
    ~classA() { cout << "~A "; }
};
class classB : public classA
{
public:
    classB() { cout << "B "; }
    ~classB() { cout << "~B "; }
};
class classC : public classB
{
public:
    classC() { cout << "C "; }
    virtual ~classC() { cout << "~C "; }
};
int main()
{
    classA *t1 = new classC;
    delete t1;
    // ❗ If the base class destructor is not virtual, deleting a derived object through a base pointer will only call the base class destructor.
    return 0;
}