#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    // Get valid dimensions (max 3)
    do {
        cout << "Enter number of rows (1-3): ";
        cin >> rows;
    } while(rows < 1 || rows > 3);

    do {
        cout << "Enter number of columns (1-3): ";
        cin >> cols;
    } while(cols < 1 || cols > 3);

    // Allocate 2D array
    double** array = new double*[rows];
    for(int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    // Fill array
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Display array
    cout << "\nArray contents:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    // Free memory
    for(int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
