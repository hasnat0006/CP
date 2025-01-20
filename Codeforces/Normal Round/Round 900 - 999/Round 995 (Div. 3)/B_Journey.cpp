#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()

const ll mod = 1e9 + 7;
const ll inf = 1e18;

void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll sum = a + b + c;
    ll ans = (n / sum) * 3LL;
    ll rem = n % sum;
    if (rem > 0) {
        ans++;
        rem -= a;
    }
    if (rem > 0) {
        ans++;
        rem -= b;
    }
    if (rem > 0) {
        ans++;
        rem -= c;
    }
    cout << ans << '\n';
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