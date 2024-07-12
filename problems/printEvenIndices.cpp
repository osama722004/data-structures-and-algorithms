#include <iostream>
using namespace std;

string printEvenIndices(int arr[], int index, string str) {
    string s = str;
    if (index < 0) {
        return s;
    }
    if (index % 2 == 0) {
        s += to_string(arr[index]);
        s += ' ';
    }
    return printEvenIndices(arr, --index, s);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << printEvenIndices(arr, n - 1, "");
    return 0;
}
