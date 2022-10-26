#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector<pair<int, int>> tree;
vector<pair<int, int>> arr;
void push(int x, int l, int r) {
    tree[x] += 
}

void build(int v, int l, int r) {
    if (r - l <= 1) {
        tree[v] = arr[l];
        return;
    }
    int m = (l + r) / 2;
    build(2 * v + 1, l, m);
    build(2 * v + 2, m, r);
    if (tree[2 * v + 1].first > tree[2 * v + 2].first)
    {
        tree[v].first = tree[2 * v + 1].first;
        tree[v].second = tree[2 * v + 1].second;
    }
    else if (tree[2 * v + 1].first == tree[2 * v + 2].first)
    {
        tree[v].second = tree[2 * v + 1].second + tree[2 * v + 2].second;
        tree[v].first = tree[2 * v + 1].first;
    }
    else {
        tree[v].first = tree[2 * v + 2].first;
        tree[v].second = tree[2 * v + 2].second;
    }
}
pair<int, int> get(int v, int l, int r, int ql, int qr) {
    if (r <= ql || l >= qr) {
        return{ -1e9, -1e9 };
    }
    if (l >= ql && r <= qr) {
        return tree[v];
    }
    int m = (l + r) / 2;
    pair<int, int> x1 = get(2 * v + 1, l, m, ql, qr), x2 = get(2 * v + 2, m, r, ql, qr);
    if (x1.first > x2.first) {
        return { x1.first, x1.second };
    }
    else if (x1.first == x2.first) {
        return { x1.first, x2.second + x1.second };
    }
    else {
        return { x2 };
    }

}


int main() {
    int n, m;
    cin >> n;
    tree.resize(4 * n, { 0, 0 });
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = 1;
    }
    build(0, 0, n);
    cin >> m;
    vector<pair<int, int>> ans;
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        ans.push_back(get(0, 0, n, l, r));

    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].first << ' ' << ans[i].second << endl;
}