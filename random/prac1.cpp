#include <bits/stdc++.h>
using namespace std;

class User
{
    int id;
    string password;

public:
    string username;
    User(int id)
    {
        this->id = id;
        cout << "User created with id: " << id << endl;
    }

    // setters and getters
    void setPassword(string password)
    {
        this->password = password;
    }
    string getPassword()
    {
        return password;
    }
};

int main()
{
    User u(1);
    u.username = "john";
    u.setPassword("password");
    cout << "Username: " << u.username << endl;
    // cout << "Password: " << u.password<< endl;//cannot get directly as it is private
    cout << "Password: " << u.getPassword() << endl;

    return 0;
}