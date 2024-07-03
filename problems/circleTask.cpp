#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m1, m2, r, p;
    cin >> m1 >> m2 >> r >> p;
    
    for (int i = 0; i < p; i++) {
        double x1, x2;
        cin >> x1 >> x2;
        double distance = sqrt(pow((x2 - m1), 2) + pow((x2 - m2), 2));
        distance > r ? cout << "NO" << endl : cout << "YES" << endl;
    }

    return 0;
}
