#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    if (x1 + x2 > x3 && x1 + x3 > x2 && x2 + x3 > x1) {
        double sum = x1 + x2 + x3;
        double s = sum / 2;
        double ans = sqrt(s * (s - x1) * (s - x2) * (s - x3));
        cout << fixed << setprecision(6) << "Valid" << endl << ans;
    } else {
        cout << "Invalid";
    }

    return 0;
}
