#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    int a[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nTranspose of Matrix:\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}