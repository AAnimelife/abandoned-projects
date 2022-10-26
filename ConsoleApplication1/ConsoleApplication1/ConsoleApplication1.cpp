#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> graph[100000];
bool used[100000];
int comp[100000];
int maxe(int a[], int n) {
    int max = -1;
    for (int i = 0; i < n; i++) {
        if (max < a[i])max = a[i];
    }
    return max;
}
void dfs(int v, int c_num) {
    used[v] = true;
    comp[v] = c_num;
    for (int u : graph[v]) {
        if (!used[u]) {
            dfs(u, c_num);
        }
    }
}

int main() {
    vector <vector <int>> ans;
    int c_num = 1;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            dfs(i, c_num);
            c_num++;
        }
    }
    cout << maxe(comp, n) << endl;
    ans.resize(n);
    for (int i = 0; i < n; i++) {
        ans[comp[i]].push_back(i + 1);
    }
    for (int i = 1; i < maxe(comp, n) + 1; i++) {
        cout << ans[i].size() << endl;
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";        
        }
        cout << endl;
    }
}
