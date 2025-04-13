#include <iostream>
#include <string> // for using string
using namespace std;

int main() {
    // Dynamically creating an int and a string
    int* myInt = new int;           // this creates an int on the heap
    string* myStr = new string;     // this creates a string on the heap

    // Ask user for input
    cout << "Enter an integer: ";
    cin >> *myInt; // using the pointer to store value directly

    cin.ignore(); // clears out leftover newline from previous input

    cout << "Enter a word: ";
    getline(cin, *myStr); // storing user input in the string pointer

    // Show the values back to the user
    cout << "\nYou entered the integer: " << *myInt << endl;
    cout << "You entered the string: " << *myStr << endl;

    // Free the memory since we used new
    delete myInt;
    delete myStr;

    return 0;
}
