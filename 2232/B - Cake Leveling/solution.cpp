#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
     ll t;
     cin>>t;
     while(t--){
     ll n;
     cin>>n;
     
     vector<ll>a(n);
     
     for(auto i=0;i<n;i++){
         cin>>a[i];
     }
     
     vector<ll>prefix(n),ans(n);
     
     prefix[0]=a[0];
     ans[0]=a[0];
     
     
     
     for(auto i=1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
        ll avg=prefix[i]/(i+1);
        ans[i]=min(ans[i-1],avg);
        
     }
     
     for(auto i=0;i<n;i++){
         cout<<ans[i]<<" ";
     }
     cout<<endl;
     
    }
    return 0;
}