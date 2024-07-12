#include <iostream>
using namespace std;

int n;

void pyramid(int row) {
    if (row > n) {
        return;
    }
    int space = n - row;
    int star = row * 2 - 1;
    for (int i = 0; i < space; i++) {
        cout << " ";
    }
    for (int i = 0; i < star; i++) {
        cout << "*";
    }
    cout << endl;
    pyramid(row + 1);
}

int main() {
    cin >> n;
    pyramid(1);
    return 0;
}
