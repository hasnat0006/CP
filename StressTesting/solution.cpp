//!-----------------------------------------------------!//
//!              Author: YUSUF REZA HASNAT              !//
//!             Created: 19|04|2024 11:48:43            !//
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

const int mod = 1e9 + 7;
const int inf = 1e18;

void solve() {
    int n, adult, kid;
    cin >> n >> adult >> kid;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(vf(v), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });
    // dbg(v);
    int ans = 0;
    for (int i = 0; i < kid; i++) {
        ans += v[i].second;
    }
    vector<int> adultHap;
    for (int i = kid; i < n; i++) {
        adultHap.push_back(v[i].first);
    }
    sort(vr(adultHap));
    for (int i = 0; i < adult; i++) {
        ans += adultHap[i];
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}