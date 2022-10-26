#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	vector<vector<int>> d(n + 1, vector<int>(m + 1));
	for (int i = 0; i <= n; i++)d[i][0] = 0;
	for (int i = 0; i <= m; i++)d[0][i] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i - 1] == b[j - 1]) {
				d[i][j] = d[i - 1][j - 1] + 1;
			}
			else {
				d[i][j] = max(d[i - 1][j], d[i][j - 1]);
			}
		}
	}
	vector<int> answer;
	int target = d[n][m];
	while (target != 0) {
		if (d[n - 1][m] == d[n][m - 1] && d[n][m-1] == target - 1) {
			answer.push_back(a[n - 1]);
			target = d[n - 1][m - 1];
			n--;
			m--;
		}
		else if (d[n - 1][m] > d[n][m - 1]) {
			target = d[n - 1][m];
			n--;
		}
		else if (d[n - 1][m] < d[n][m - 1]) {
			target = d[n][m - 1];
			m--;
		}
		else {
			target = d[n - 1][m];
			n--;
		}
	}
	for (int i = answer.size() - 1; i >= 0; i--) {
		cout << answer[i] << " ";
	}
}