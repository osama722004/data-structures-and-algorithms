#include <iostream>
using namespace std;

long long permutation(int n, int r) {
    long long ans = 1;
    for (int i = n - r + 1; i <= n; ++i) {
        ans *= i;
    }
    return ans;
}

long long combination(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1; 

    long long ans = 1;
    for (int i = 1; i <= r; ++i) {
        ans *= (n - r + i);
        ans /= i;
    }
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << combination(a, b) << " " << permutation(a, b) << endl;
    return 0;
}
