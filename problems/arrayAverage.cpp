#include <iostream>
#include <iomanip>
using namespace std;

long long sum(int arr[], int s) {
    if (s == 0) {
        return arr[0];
    }
    return arr[s] + sum(arr, s - 1);
}

int main() {
    int s;
    cin >> s;

    int arr[s];
    for (int i = 0; i < s; i++) {
        cin >> arr[i];
    }

    long long totalSum = sum(arr, s - 1);

    double average = static_cast<double>(totalSum) / s;
    cout << fixed << setprecision(6) << average << endl;

    return 0;
}
