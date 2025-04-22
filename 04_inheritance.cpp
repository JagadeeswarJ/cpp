#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    string name;
    string color;
    int age;

    Animal(string n = "", int a = 0)
    {
        name = n;
        age = a;
    }

    // Animal() : name(""), age(0)
    // {
    // }

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

class Mammal : public Animal
{
public:
    string bloodType;
    Mammal()
    {
        bloodType = "Warm Blooded";
    }
};
class Bird : public Animal
{
public:
    string featherColor;
    Bird()
    {
        featherColor = "Red";
        this->fly();
    }
    void fly()
    {
        cout << "Bird is flying" << endl;
    }
};
class Teacher
{
public:
    string name;
    float salary;
    Teacher(string n, float s)
    {
        name = n;
        salary = s;
    }
};

class Student
{
public:
    string name;
    int gpa;
    Student(string n, int gpa)
    {
        name = n;
        this->gpa = gpa;
    }
};
class TA : public Teacher, public Student
{
public:
    TA(string n, float s, int gpa) : Teacher(n, s), Student(n, gpa)
    {

        cout << n << " TA created" << endl;
    }
    void getDetail()
    {
        // ambiguity resolution
        cout << "Name: " << Teacher::name << endl;
        cout << "Salary: " << salary << endl;
        cout << "GPA: " << gpa << endl;
    }
};
int main()
{
    cout << "Inheritance, for code reusability" << endl;
    // Inheritance: creating a new class from an existing class
    Fish f1("Nemo", 2, 4);
    f1.getDetail();
    // Mode of Inheritance
    // //public: public and protected members of base class will remain public and protected in derived
    // //protected: public and protected members of base class will become protected in derived class
    // //private: public and protected members of base class will become private in derived
    // //private members of base class will not be accessible in derived class, so use protected when u want to use inheritance

    // Types of Inheritance
    // //Single Inheritance: one base class and one derived class
    // //Multiple Inheritance: one derived class and multiple base classes
    // //Multilevel Inheritance: one base class and one derived class and one more derived class,example: animal->fish->shark
    cout << "Multi level Inheritance" << endl;
    TA t1("John", 1000, 4);
    t1.getDetail();
    // //Hierarchical Inheritance: one base class and multiple derived classes, example: animal->Bird, animal->mammal
    Bird b1;
    return 0;
}