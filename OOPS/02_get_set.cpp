#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    float cgpa;

public:
    Student(string n, float c)
    {
        name = n;
        cgpa = c;
    }
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setCgpa(float c)
    {
        cgpa = c;
    }
    float getCgpa()
    {
        return cgpa;
    }
    void getPercentage()
    {
        cout << "Percentage: " << (cgpa * 100) / 10 << "%" << endl;
    }
    void setNameAndCgpa(string n, float c)
    {
        name = n;
        cgpa = c;
    }
};

int main()
{
    Student s1("john", 8.5);
    s1.getPercentage();
    s1.setCgpa(2.3);
    s1.getPercentage();
    return 0;
}