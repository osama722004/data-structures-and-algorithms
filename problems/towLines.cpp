#include <iostream>
using namespace std;

int main() {
    int X1, Y1, X2, Y2;
    int X3, Y3, X4, Y4;

    cin >> X1 >> Y1 >> X2 >> Y2;
    
    cin >> X3 >> Y3 >> X4 >> Y4;

    int dx1 = X2 - X1;
    int dy1 = Y2 - Y1;
    int dx2 = X4 - X3;
    int dy2 = Y4 - Y3;

    if (dy1 * dx2 == dy2 * dx1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
