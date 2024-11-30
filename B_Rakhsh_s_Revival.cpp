//!-----------------------------------------------------!//
//!              Author: YUSUF REZA HASNAT              !//
//!             Created: 30|11|2024 20:46:17            !//
//!-----------------------------------------------------!//

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "D:\Documents\debug1.cpp"
#else
#define dbg(x...)
#define dbgc(x...)
#endif
using namespace std;

#define ll long long
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()

const ll mod = 1e9 + 7;
const ll inf = 1e18;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    vector<ll> v;
    ll cnt = 0;
    ll ans = 0;
    ll ig = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (ig == 0)
                cnt++;
            else
                ig--;
        }
        else {
            cnt = 0;
            if(ig)
                ig--;
        }
        if (cnt == m) {
            ans++;
            ig = k - 1;
            cnt = 0;
        }
        dbg(i, ans, cnt, ig);
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}