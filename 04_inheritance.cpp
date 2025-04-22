#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    string name;
    string color;
    int age;

    Animal(string n, int a)
    {
        name = n;
        age = a;
    }

    void eat()
    {
        cout << "Animal is eating" << endl;
    }
    void breath()
    {
        cout << "Animal is breathing" << endl;
    }
};
class Fish : public Animal
{
    int fins;

public:
    Fish(string n, int a, int f) : Animal(n, a)
    {
        this->fins = f;
        cout << "Fish created" << endl;
    }
    void getDetail()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Fins: " << fins << endl;
    }
};
int main()
{
    cout << "Inheritance, for code reusability" << endl;
    // Inheritance: creating a new class from an existing class
    Fish f1("Nemo", 2, 4);
    f1.getDetail();
    // Mode of Inheritance
    // public: public and protected members of base class will remain public and protected in derived
    // protected: public and protected members of base class will become protected in derived class
    // private: public and protected members of base class will become private in derived 
    // private members of base class will not be accessible in derived class, so use protected when u wnat oto use inheritance
    return 0;
}