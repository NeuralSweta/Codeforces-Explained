#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long oddCount = 0;
        long long evenParity[2] = {0,0};
        for(int i=0;i<n;i++){
            long long x;
            scanf("%lld", &x);
            if(x % 2 == 1){
                oddCount++;
            } else {
                long long r = x/2;
                evenParity[r%2]++;
            }
        }
        long long ans = max(oddCount, max(evenParity[0], evenParity[1]));
        printf("%lld
", ans);
    }
    return 0;
}