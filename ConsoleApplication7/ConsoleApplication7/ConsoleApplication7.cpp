#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int inf = 1e9;
bool binar(int n, int k, vector<int> arr) {
    int r = n;
    int l = 0;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (arr[m] >= k)
            r = m;
        else
            l = m + 1;
    }
    if (arr[l] == k)
        return true;
    else
        return false;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b;
    for (int i = 0; i < m; i++) {
        cin >> b;
        if (binar(n, b, a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}