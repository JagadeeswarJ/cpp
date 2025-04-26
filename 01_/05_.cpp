#include <iostream>
#include <algorithm> //to use sort function
#include <stack>     //to use stack
using namespace std;
int main()
{
    // stack:  LIFO (Last In First Out) data structure,all of same type
    string str = "Hello World!"; // string to be reversed
    stack<char> s;               // stack of characters
    for (char c : str)
        s.push(c);     // push each character onto the stack
    string reversed;   // string to store the reversed string
    while (!s.empty()) // while the stack is not empty
    {
        reversed += s.top(); // add the top character of the stack to the reversed string
        s.pop();             // remove the top character from the stack
    }
    cout << "Reversed string: " << reversed << endl; // print the reversed string
    // sort:  sort function to sort the string in ascending order
    sort(str.begin(), str.end());             // sort the string in ascending order
    cout << "Sorted string: " << str << endl; // print the sorted string
    int arr[5] = {5, 4, 3, 2, 1};             // array to be sorted
    cout << *(arr + 4) << endl;                  // print the address of the second element of the array
    return 0;
}