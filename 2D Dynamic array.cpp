
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Step 1: Create an array of int pointers (rows)
    int** arr = new int*[rows];

    // Step 2: Allocate each row with 'cols' columns
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Step 3: Take input
    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Step 4: Display the matrix
    cout << "\nMatrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Step 5: Free memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];  // delete each row
    }
    delete[] arr;         // delete array of pointers

    return 0;
}
