//!-----------------------------------------------------!//
//!              Author: YUSUF REZA HASNAT              !//
//!-----------------------------------------------------!//

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "D:\Documents\debug1.cpp"
#else
#define dbg(x...)
#endif
using namespace std;

#define ll long long
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()

const ll mod = 1e9 + 7;
const ll inf = mod;

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i % 2 == 0)
            odd += v[i];
        else
            even += v[i];
    }
    dbg(even, odd);
    ll oddD = (n + 1) / 2, evenD = n / 2;
    if (odd % oddD == 0 and even % evenD == 0 and (odd / oddD == even / evenD))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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