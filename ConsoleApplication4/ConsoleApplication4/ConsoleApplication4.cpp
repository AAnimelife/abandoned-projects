#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    string code;
    cin >> code;
    int i = 0, j = 0;
    while (code != "home") {
        cin >> code;
        if (code == "go") {
            cin >> code;
            if (code == "right") {
                j++;
            }
            else if (code == "left") {
                j--;
            }
            else if (code == "down") {
                i--;
            }
            else if (code == "up") {
                i++;
            }
        }
        else if (code == "check") {
            if (a[i][j] == 1)cout << "Common" << endl;
            else if (a[i][j] == 2)cout << "Rare" << endl;
        }

    }
    return 0;
}