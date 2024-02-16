//!-----------------------------------------------------!//
//!                  YUSUF REZA HASNAT                  !//
//!-----------------------------------------------------!//

#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"
#define YUSUF ios_base::sync_with_stdio(false),
#define REZA cin.tie(NULL),
#define HASNAT cout.tie(NULL)

int mod = 1000000007;
int inf = 1e18;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (n >= 4 or n == 1)
        cout << "YES" << endl;
    else if (n == 2) {
        if (is_sorted(vf(v)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if (n == 3) {
        if (is_sorted(vf(v)))
            cout << "YES" << endl;
        else {
            swap(v[0], v[2]);
            if (is_sorted(vf(v)))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}

int32_t main() {
    YUSUF REZA HASNAT;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}