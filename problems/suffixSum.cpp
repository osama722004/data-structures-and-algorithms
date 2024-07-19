#include <iostream>
using namespace std;

long long sum(int arr[], int n,int m) {
    if (m == 0) {
        return arr[n];
    }
    return arr[n] + sum(arr, n-1,m-1);
}

int main() {
    int n,m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sum(arr, n-1, m-1);
}
