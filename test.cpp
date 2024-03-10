//!-----------------------------------------------------!//
//!              Author: YUSUF REZA HASNAT              !//
//!             Created: 10|03|2024 11:32:17            !//
//!-----------------------------------------------------!//

#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define float long double
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define endl "\n"

int mod = 1000000007;
int inf = 1e18;

struct BigInteger {
    string str;
    // Constructor to initialize
    // BigInteger with a string
    BigInteger(string s) { str = s; }
    // Overload + operator to add
    // two BigInteger objects
    BigInteger operator+(const BigInteger& b) {
        string a = str, c = b.str;
        int alen = a.length(), clen = c.length();
        int n = max(alen, clen);
        if (alen > clen)
            c.insert(0, alen - clen, '0');
        else if (alen < clen)
            a.insert(0, clen - alen, '0');
        string res(n + 1, '0');
        int carry = 0;
        for (int i = n - 1; i >= 0; i--) {
            int digit = (a[i] - '0') + (c[i] - '0') + carry;
            carry = digit / 10;
            res[i + 1] = digit % 10 + '0';
        }
        if (carry == 1) {
            res[0] = '1';
            return BigInteger(res);
        }
        else 
            return BigInteger(res.substr(1));
    }
    
    // Overload - operator to subtract
    // first check which number is greater and then subtract
    BigInteger operator-(const BigInteger& b) {
        string a = str;
        string c = b.str;
        int alen = a.length(), clen = c.length();
        int n = max(alen, clen);
        if (alen > clen)
            c.insert(0, alen - clen, '0');
        else if (alen < clen)
            a.insert(0, clen - alen, '0');
        if (a < c) {
            swap(a, c);
            swap(alen, clen);
        }
        string res(n, '0');
        int carry = 0;
        for (int i = n - 1; i >= 0; i--) {
            int digit = (a[i] - '0') - (c[i] - '0') - carry;
            if (digit < 0) {
                digit += 10;
                carry = 1;
            }
            else {
                carry = 0;
            }
            res[i] = digit + '0';
        }
        // remove leading zeros
        int i = 0;
        while (i < n && res[i] == '0')
            i++;
        if (i == n)
            return BigInteger("0");
        return BigInteger(res.substr(i));
    }
    
    // Overload * operator to multiply
    // two BigInteger objects
    BigInteger operator*(const BigInteger& b) {
        string a = str, c = b.str;
        int alen = a.length(), clen = c.length();
        int n = alen + clen;
        string res(n, '0');
        for (int i = alen - 1; i >= 0; i--) {
            int carry = 0;
            for (int j = clen - 1; j >= 0; j--) {
                int digit = (a[i] - '0') * (c[j] - '0') + (res[i + j + 1] - '0') + carry;
                carry = digit / 10;
                res[i + j + 1] = digit % 10 + '0';
            }
            res[i] += carry;
        }
        int i = 0;
        while (i < n && res[i] == '0')
            i++;
        if (i == n)
            return BigInteger("0");
        return BigInteger(res.substr(i));
    }

    // Overload << operator to output
    // BigInteger object
    friend ostream& operator<<(ostream& out, const BigInteger& b) {
        out << b.str;
        return out;
    }
};

void solve() {
    string a, b;
    cin >> a >> b;
    BigInteger A(a);
    BigInteger B(b);
    BigInteger C = A * B;
    cout << A + B << endl;
    cout << B - A << endl;
    cout << A * B << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}