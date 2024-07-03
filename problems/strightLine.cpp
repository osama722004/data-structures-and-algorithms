#include <iostream>
using namespace std;

int main() {
    int X1, Y1, X2, Y2, X3, Y3;
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;

    // Check for collinearity using cross product
    if ((Y2 - Y1) * (X3 - X2) == (Y3 - Y2) * (X2 - X1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
