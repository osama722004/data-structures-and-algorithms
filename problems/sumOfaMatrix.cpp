#include <iostream>
using namespace std;

void arrSum(int arr1[][100], int arr2[][100], int r, int c, int currunt) {
    if (currunt == r) {
        return;
    }
    for (int i = 0; i < c; i++) {
        cout << arr1[currunt][i] + arr2[currunt][i] << " ";
    }
    cout << endl;
    arrSum(arr1, arr2, r, c, currunt + 1);
}

int main() {
    int r, c;
    cin >> r >> c;

    int arr1[100][100];
    int arr2[100][100];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr2[i][j];
        }
    }

    arrSum(arr1, arr2, r, c, 0);

    return 0;
}
