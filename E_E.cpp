//!-----------------------------------------------------!//
//!              Author: YUSUF REZA HASNAT              !//
//!             Created: 12|03|2024 22:43:03            !//
//!-----------------------------------------------------!//

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "D:\Documents\debug.h"
#else
#define dbg(x...)
#define dbgc(x...)
#endif
using namespace std;

#define int long long
#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"

int mod = 1000000007;
int inf = 1e18;

void solve() {
    int n, s;
    cin >> n >> s;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i] = {x + i + 1, i + 1};
    }
    sort(vf(v));
    dbg(v);
    int cost = 0;
    int k = 0;
    for (int i = 0; i < n; i++) {
        int temp = v[i].first + (v[i].second * (k + 1));
        dbg(i, temp);
        if (cost + temp <= s) {
            cost += temp;
            k++;
        }
        else {
            break;
        }
        dbg(cost);
    }
    cout << k << " " << cost << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}