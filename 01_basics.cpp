#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    float cgpa;
    Student(string n, float c)
    {
        name = n;
        cgpa = c;
    }
    void getPercentage()
    {
        cout << "Percentage: " << (cgpa * 100) / 10 << "%" << endl;
    }
};

class User
{
    int id;
    string username;
    string password;
    string bio;
    void deactivate()
    {
        cout << "Account deactivated" << endl;
    }
    void editBio(string newBio)
    {
        bio = newBio;
        cout << "Bio updated to: " << bio << endl;
    }
};

int main()
{
    cout << " dasd" << endl;
    Student s1("john", 8.5);
    s1.getPercentage();
    cout << s1.name << endl; // This will cause a compilation error if name is private
    // Acces modifiers
    // public, private, protected
    // public: accessible from anywhere
    // private: accessible only within the class
    // protected: accessible within the class and its derived classes
    // Encapsulation: bundling data and methods that operate on the data within one unit
    // Inheritance: creating a new class from an existing class
    // Polymorphism: ability to take many forms
    // Abstraction: hiding the implementation details and showing only the essential features
    // Constructor: a special member function that is called when an object of the class is created
    // Destructor: a special member function that is called when an object of the class is destroyed
    // Static members: members that are shared by all objects of the class
    // Friend function: a function that is not a member of the class but has access to its private members
    return 0;
}