#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>
using namespace std;

int main()
{
	int n, M;
	cin >> n >> M;
	vector<int> a(n), d(M + 1), s(n);
	for (int i = 1; i < M; i++)d[i] = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	if (M > 0)d[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int w = M - a[i]; w >= 0; w--) {
			if (d[w]) {
				d[w + a[i]] += s[i];
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < M + 1; i++) {
		if (d[i] > ans)ans = d[i];
	}
	cout << ans;

	return 0;
}