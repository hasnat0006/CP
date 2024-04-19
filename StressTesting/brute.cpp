//!-----------------------------------------------------!//
//!              Author: YUSUF REZA HASNAT              !//
//!             Created: 19|04|2024 11:48:43            !//
//!-----------------------------------------------------!//

#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"

const int mod = 1e9 + 7;
const int inf = 1e18;

vector<pair<int, int>> v;

int findAns(int i, int adult, int kid) {
    if (i == -1 or (adult == 0 and kid == 0)) {
        return 0;
    }
    int adultTake = 0, kidTake = 0, none = 0;
    if (adult > 0)
        adultTake = findAns(i - 1, adult - 1, kid) + v[i].first;
    if (kid > 0)
        kidTake = findAns(i - 1, adult, kid - 1) + v[i].second;
    none = findAns(i - 1, adult, kid);
    return max({adultTake, kidTake, none});
}

void solve() {
    int n, adult, kid;
    cin >> n >> adult >> kid;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    cout << findAns(n - 1, adult, kid) << endl;
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