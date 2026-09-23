#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        static char buf[200005];
        scanf("%d %s", &n, buf);
        string s = buf;
        if (s[0] == '1') {
            int z = count(s.begin(), s.end(), '0');
            printf("%d
", z);
            continue;
        }
        int p = s.find('1');
        if (p == (int)string::npos) {
            printf("0
");
            continue;
        }
        // p is 0-indexed first one; k (prefix length) ranges from p to n
        int zerosSuffix = 0;
        for (int i = p; i < n; i++) if (s[i] == '0') zerosSuffix++;
        int onesPrefix = 0;
        int best = zerosSuffix; // k = p
        for (int k = p + 1; k <= n; k++) {
            char c = s[k - 1];
            if (c == '1') onesPrefix++;
            else zerosSuffix--;
            best = min(best, onesPrefix + zerosSuffix);
        }
        printf("%d
", best);
    }
    return 0;
}