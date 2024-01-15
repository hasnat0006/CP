//!-----------------------------------------------------!//
//!                  YUSUF REZA HASNAT                  !//
//!-----------------------------------------------------!//

#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "C:\Users\Yusuf Reza Hasnat\OneDrive\Desktop\CP\debug.h"
#else 
#define dbg(x...)
#define dbgc(x...)
#endif

using namespace std;

#define int   long long
#define float long double
#define pb    push_back
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define dosomic(x) fixed << setprecision(x)
#define endl "\n"
#define case(x) cout << "Case " << x << ": "
#define YUSUF ios_base::sync_with_stdio(false),
#define REZA  cin.tie(NULL), 
#define HASNAT cout.tie(NULL)

int mod  = 1000000007;
float pi = acos(-1);
int inf  = 1e18;

void solve()
{
    string s;
    cin >> s;
    int zero = 0, one = 0;	
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0')
            zero++;
        else
            one++;
    }
    int dlt = abs(zero - one);
    int cost = 0;
    if(one > zero){
        int cnt = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '1')
                cnt++;
            if(cnt == dlt){
                cost = s.size() - i;
                break;
            }
        }
    }
    else if(zero > one){
        int cnt = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '0')
                cnt++;
            if(cnt == dlt){
                cost = s.size() - i;
                break;
            }
        }
    }
    cout << cost << endl;
}

int32_t main()
{
    YUSUF REZA HASNAT;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++){
        // case(i)
        solve(); 
    }
    return 0;
}