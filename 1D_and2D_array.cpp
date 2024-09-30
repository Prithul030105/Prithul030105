#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the 1D array: ";
    cin >> n;

    // Dynamically allocate memory for a 1D array using pointers
    int* arr = new int[n];

    // Input elements into the 1D array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the elements of the 1D array
    cout << "1D Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}



// 2d array
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for the 2D array: ";
    cin >> rows >> cols;

    // Dynamically allocate memory for a 2D array
    int** arr = new int*[rows];  // Array of pointers to rows
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];  // Allocate each row
    }

    // Input elements into the 2D array
    cout << "Enter elements for the 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Display the elements of the 2D array
    cout << "2D Array elements are:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];  // Delete each row
    }
    delete[] arr;  // Delete the array of row pointers

    return 0;
}
