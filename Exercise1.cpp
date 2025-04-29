#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;
    
    // Dynamically allocate a string
    string* dynamicString = new string;

    // Get integer input
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    // Get string input
    cout << "Enter a string value: ";
    cin.ignore(); // Clear input buffer
    getline(cin, *dynamicString);

    // Display results
    cout << "\nInteger value: " << *dynamicInt << endl;
    cout << "String value: " << *dynamicString << endl;

    // Free memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
