//!-----------------------------------------------------!//
//!              Author: YUSUF REZA HASNAT              !//
//!             Created: 27|02|2024 21:28:02            !//
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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(vf(a));
    while (q--) {
        int x;
        cin >> x;
        do {
            int ans = 2 * accumulate(vf(a), 0LL) - a[0] - a.back();
            if (ans == x) {
                for (int i : a) {
                    cout << i << " ";
                }
                x = -1;
                cout << endl;
                break;
            }
        } while (next_permutation(vf(a)));
        if (x != -1)
            cout << -1 << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}