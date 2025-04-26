#include <iostream>
using namespace std;
class Number
{
    int n;

public:
    Number()
    {
        cout << 0 << " ";
    }
    Number(int i = 0)
    {
        n = i;
        cout << n << " ";
    }
};
int main()
{
    int i = 1;
    //  "Most Vexing Parse"., it is a function defination, not a variable declaration.
    Number n1(); // LINE-1
    Number *n2 = new Number(i++);
    Number *n3;
    new Number(i++);
    new Number(i++);
    return 0;
}