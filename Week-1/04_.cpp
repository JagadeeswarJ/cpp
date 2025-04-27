#include <iostream>
#include <algorithm> //to use sort function

using namespace std;
int main()
{
    cout << "Hello, world!" << endl;
    int data[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(data) / sizeof(data[0]);
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << endl;
    sort(data, data + n, greater<int>()); // Sort the array in ascending order
    // A comparator object is an object that can be called like a function and is used to define custom sorting logic.

    // In C++, greater<int> is a function object class template from the <functional> header. When you write greater<int>(), you're creating an object of that class that can be used like a function:

    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << endl;

    // binary_search: The binary_search function is used to check if a specific value exists in a sorted range. It returns true if the value is found and false otherwise.
    int value = 5;
    int binData[] = {9, 7, 5, 4, 3, 1, 0};
    bool found = binary_search(binData, binData + n, value, greater<int>());
    // binary_search in C++ assumes that the range is sorted in the order specified by the comparator.

    // If you use binary_search with a custom comparator, your data must already be sorted using that same comparator. Otherwise, the result is undefined.

    if (found)
        cout << "Value " << value << " found in the array." << endl;
    else
        cout << "Value " << value << " not found in the array." << endl;

    // replace: The replace function is used to replace all occurrences of a specific value in a range with another value.
    int replaceData[] = {1, 2, 3, 4, 5, 6};
    int replaceSize = sizeof(replaceData) / sizeof(replaceData[0]);
    cout << "Before replace: ";
    for (int i = 0; i < replaceSize; i++)
        cout << replaceData[i] << " ";
    cout << endl;
    int oldValue = 3;
    int newValue = 99;
    replace(replaceData, replaceData + replaceSize, oldValue, newValue);
    // The replace function takes four arguments: the beginning of the range, the end of the range, the value to be replaced, and the new value.
    // It replaces all occurrences of oldValue with newValue in the specified range.

    cout << "After replace: ";
    for (int i = 0; i < replaceSize; i++)
        cout << replaceData[i] << " ";
    cout << endl;

    // rotate: The rotate function is used to rotate the elements in a range. It takes three arguments: the beginning of the range, the middle of the range, and the end of the range.
    //  The elements between the first and second arguments are rotated to the end of the range, and the elements from the second argument to the end are moved to the beginning.
    int rotateData[] = {1, 2, 3, 4, 5, 6};
    int rotateSize = sizeof(rotateData) / sizeof(rotateData[0]);
    cout << "Before rotate: ";
    for (int i = 0; i < rotateSize; i++)
    cout << rotateData[i] << " ";
    cout << endl;
    int rotateMiddle = 3; // Rotate the first three elements to the end
    rotate(rotateData, rotateData + rotateMiddle, rotateData + rotateSize);
    //range is [begin,end), thrid arg is not counted
    cout << "After rotate: ";
    for (int i = 0; i < rotateSize; i++)
        cout << rotateData[i] << " ";
    cout << endl;

    return 0;
}