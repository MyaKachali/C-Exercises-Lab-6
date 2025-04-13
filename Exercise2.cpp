#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Ask for dimensions (limit them to 3)
    cout << "Enter number of rows (max 3): ";
    cin >> rows;
    while (rows > 3 || rows < 1) {
        cout << "Invalid! Enter rows between 1 and 3: ";
        cin >> rows;
    }

    cout << "Enter number of columns (max 3): ";
    cin >> cols;
    while (cols > 3 || cols < 1) {
        cout << "Invalid! Enter columns between 1 and 3: ";
        cin >> cols;
    }

    // Dynamically create a 2D array of doubles
    double** array = new double*[rows]; // create an array of row pointers
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols]; // for each row, create a column array
    }

    // Get user input to fill the array
    cout << "\nEnter values for the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Value for [" << i << "][" << j << "]: ";
            cin >> array[i][j]; // assigning values with regular indexing
        }
    }

    // Display the array
    cout << "\nArray values:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Free the memory (important when using new)
    for (int i = 0; i < rows; ++i) {
        delete[] array[i]; // delete each row array
    }
    delete[] array; // delete the array of pointers

    return 0;
}
