#include <iostream>
using namespace std;

string baseConversion(int n, string s) {
    string b = "";
    b = s + b;
    if (n % 2 == 0) {
        b = '0' + b;
    } else {
        b = '1' + b;
    }
    if (n / 2 == 0) {
        return b;
    }
    return baseConversion(n / 2, b);
}

int main() {
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cout << baseConversion(x, "") << endl;
    }
}
