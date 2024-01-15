//!-----------------------------------------------------!//
//!                  YUSUF REZA HASNAT                  !//
//!-----------------------------------------------------!//

#include <bits/stdc++.h>
// #include "debug.h"
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

#define int long long
#define float long double
#define pb push_back
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"
#define YUSUF ios_base::sync_with_stdio(false),
#define REZA cin.tie(NULL),
#define HASNAT cout.tie(NULL)
// #define ordered_set tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update>

int mod = 1000000007;
float pi = acos(-1);
int inf = 1e18;

int highhest(int n)
{
    int ans = -1;
    while (n > 0)
    {
        int md = n % 10;
        ans = max(ans, md);
        n /= 10;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = n + 1;
        string s = to_string(i);
        // sort(vr(s));
        // int big = s[0];
        for (auto c : s)
        {
            int j = i - (c - '0');
            dp[i] = min(dp[i], dp[j] + 1);
        }
    }
    cout << dp[n] << endl;
}

int32_t main()
{

    YUSUF REZA HASNAT;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}