#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printalgorithm(vector<int> a, vector<int> b, vector<int> c) {
    vector<int> answer;
    int max = -1, maxind = -1;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] > max) {
            max = b[i];
            maxind = i;
        }
    }
    answer.push_back(a[maxind]);
    for (int i = 0;; i++) {
        answer.push_back(a[c[maxind]]);
        maxind = c[maxind];
        if (c[maxind] == -1)break;
    }
    for (int i = answer.size()-1; i >= 0; i--) {
        cout << answer[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), d(n), p(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    d[0] = 1;
    p[0] = -1;
    for (int i = 1; i < n; i++) {
        d[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && d[i] < d[j] + 1) {
                d[i] = d[j] + 1;
                p[i] = j;
            }
        }
        if (d[i] == 1) p[i] = -1;
    }
    cout << *max_element(d.begin(), d.end()) << endl;
    printalgorithm(a, d, p);
}