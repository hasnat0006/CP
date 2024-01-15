//!-----------------------------------------------------!//
//!                  YUSUF REZA HASNAT                  !//
//!-----------------------------------------------------!//

#include <bits/stdc++.h>
// #include "debug.h"
using namespace std;

#define int long long
#define float long double
#define pb push_back
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define endl "\n"
#define YUSUF ios_base::sync_with_stdio(false),
#define REZA cin.tie(NULL),
#define HASNAT cout.tie(NULL)

int mod = 1000000007;
float pi = 3.141592653589793238462643383279502884197;
int inf = 1e18;

using namespace std;

void solve()
{
    int n;
    cin >> n;
    stack<string> st;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    vector<char> ans;
    while (!st.empty())
    {
        string s = st.top();
        mp[s]++;
        st.pop();
        if(mp[s] == 1){
            ans.pb(s[s.size() - 2]);
            ans.pb(s[s.size() - 1]);
        }
        
    }
    // debug(ans);
    for (auto it : ans)
        cout << it;
    cout << endl;
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