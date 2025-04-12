#include <iostream>
using namespace std;

int main() {
    int myNumber = 42; // just a random number to store

    int* ptr = &myNumber; // pointer that stores address of myNumber

    // Output the value of the variable directly
    cout << "Value of myNumber: " << myNumber << endl;

    // Output the address of the variable
    cout << "Address of myNumber: " << &myNumber << endl;

    // Output the value stored in the pointer (should match address above)
    cout << "Value of ptr (should be address): " << ptr << endl;

    // Output the value pointed to by the pointer (dereferencing it)
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}
