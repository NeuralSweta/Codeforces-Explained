#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> v(n);
        vector<ll> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            v[i] = a[i] - 1LL * i * k;
            prefix[i + 1] = prefix[i] + v[i];
        }
        vector<ll> ans(n, 0);
        int p = 1;
        for (int i = 1; i < n - 1; i++) {
            ll T = a[i - 1] - 1LL * i * k;
            if (p < i + 1)
                p = i + 1;
            while (p < n && v[p] > T) {
                p++;
            }
            ll cnt = p - (i + 1);
            if (cnt > 0) {
                ll sumV = prefix[p] - prefix[i + 1];
                ans[i] = sumV - cnt * T;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << '
';
    }
 
    return 0;
}