#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    n--;
    int a[47][2] = { 0 };
    a[0][0] = 1;
    if (n < 2) {
        cout << 1;
    }
    else {
        for (int i = 0; i <= n; i++) {
            a[i + 1][0] += a[i][0];
            a[i][1] += a[i][0];
            a[i + 2][0] += a[i][1];
        }
        cout << a[n - 1][0] + a[n - 2][1];
    }
}