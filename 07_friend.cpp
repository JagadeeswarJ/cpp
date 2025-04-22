#include <bits/stdc++.h>
using namespace std;

class A
{
    string secret = "password";
    friend class B; // friend class, b will have access to private members of A
    // friend function, show will have access to private members of A
    friend void show(A a);
};
class B
{
public:
    void show(A a)
    {
        cout << a.secret << endl; // error
    }
};
void show(A a)
{
    cout << a.secret << endl; // error
}
int main()
{
    cout << "Friend" << endl;
    A a1;
    B b1;
    b1.show(a1);
    show(a1);
    return 0;
}