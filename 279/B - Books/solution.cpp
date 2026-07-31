#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main() {
   ll n,t;
   cin>>n>>t;
   vector<ll>v(n);
   for(auto i=0;i<n;i++){
       cin>> v[i];
   }
   ll i=0;
   ll j=0;
   ll sum= v[i];
   ll maxi=0;
   while(j<=n-1 && i<n){
       if(sum<=t){
           maxi=max(maxi,(j-i+1));
           j++;
           sum+=v[j];
       }
       else {
           sum-=v[i];
           i++;
       }
   }
   cout<<maxi<<endl;
       return 0;
}