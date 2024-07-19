#include <iostream>
using namespace std;

bool isPalindrome(int A[], int l, int r) {
    if (l >= r) return true;
    if (A[l] == A[r]) {
        return isPalindrome(A, l + 1, r - 1);
    } else {
        return false;
    }
}

int main() {
    int N;
    cin >> N;
    
    int A[N];
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (isPalindrome(A, 0, N - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
