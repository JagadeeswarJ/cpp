#include <bits/stdc++.h>
using namespace std;

// class Student
// {
//     string name;
//     float cgpa;

// public:
// };

class Car
{

public:
    string color;
    string name;
    int *mileage;

    Car()
    {
        cout << "Car created, no details" << endl;
    }

    Car(string n, string c)
    {
        cout << "Car created" << endl;
        this->name = n;
        this->color = c;
        this->start();
        // dynamically allocated memory
        mileage = new int;
        *mileage = 10;
    }
    // copy constructor
    Car(const Car &c)
    {

        cout << "copying car" << endl;
        this->name = c.name;
        this->color = c.color;
        // mileage = c.mileage; // shallow copy
        mileage = new int;       // deep copy
        *mileage = *(c.mileage); // deep copy
        cout << "car copied" << endl;
    }
    void start()
    {
        cout << "Car started" << endl;
    }
    void stop()
    {
        cout << "Car stopped" << endl;
    }
    ~Car()
    {
        cout << this->name << " Car destroyed" << endl;
        // free the dynamically allocated memory, static memory is automatically freed
        // when the object goes out of scope
        // delete the pointer to the dynamically allocated memory
        delete mileage;
        if(mileage!=NULL)
        {
            cout << "mileage deleted" << endl;
        }
        else
        {
            cout << "mileage already deleted" << endl;
        }
    }
};
int main()
{
    // Student s1("john", 8.5);
    // encapsulation: bundling data and methods that operate on the data within one unit
    // constructor: a special member function that is called when an object of the class is created,
    // for user defined constructor , use the same name as the class, no return type,should be public, cause called in main
    // destructor: a special member function that is called when an object of the class is destroyed
    // Car c1;
    // constructor used to initialize the object, values can be passed to the constructor
    Car c2("Maruti", "red");
    // this pointer: a pointer that points to the object that is calling the member function
    // if we don't crreate a constructor, the default non- parameterized constructor is called.
    // can create multiple constructors with different parameters, this is called constructor overloading
    // copy constructor: a constructor that creates a new object as a copy of an existing object
    Car c3(c2); // copy constructor,custom copy constructor is called
    // in cpp, copy constructor is called when an object is passed by value to a function,we can also create our own copy constructor
    // c3.start();
    // c3.stop();
    cout << c3.name << endl;
    cout << "C4" << endl;

    // Shallow and deep copy
    // shallow copy: copies the values of the data members of the object
    // deep copy: copies the values of the data members of the object and creates a new copy of the dynamically allocated memory
    // if in an object, we have a pointer to a dynamically allocated memory, then shallow copy will copy the address of the memory,
    // but deep copy will create a new copy of the memory and copy the values to it
    // shallow copy can cause problems if the original object is deleted, as the copied object will still point to the deleted memory
    // deep copy is safer as it creates a new copy of the memory and does not depend on the original object
    // shallow copy is faster as it does not create a new copy of the memory
    cout << "shallow , deep Copy" << endl;
    cout << "c2 mileage: " << *(c2.mileage) << endl;
    cout << "c3 mileage: " << *(c3.mileage) << endl;
    *c2.mileage = 123;
    // even in default constructor , shallow copy is done, hence use custom copy constructor, with deep copy
    cout << *c3.mileage << endl; // due to shallow copy, c3 mileage will also change
    // cout << "c3 mileage: " << *(c3.mileage) << endl;

    cout << "Destructor" << endl;
    // destructor is called when the object goes out of scope, or when delete is called on the object,automatically called
    // a custom destructor is used to free the dynamically allocated memory

    return 0;
}