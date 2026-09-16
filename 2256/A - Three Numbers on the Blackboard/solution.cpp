#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
 
        // Sort so that a <= b <= c
        if (a > b) swap(a, b);
        if (b > c) swap(b, c);
        if (a > b) swap(a, b);
 
        cout << min(c - a, b) << '
';
    }
 
    return 0;
}