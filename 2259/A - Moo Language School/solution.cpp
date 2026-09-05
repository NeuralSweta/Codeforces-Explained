#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        for(ll i=0;i<n;i+=k){
            bool found=false;
            for(ll j=i;j<i+k;j++){
                if(s[j]=='0'){
                    found=true;
                     break;
                }
            }
              if(!found)count++;
        }
        cout<<count<<endl;
    }
    return 0; 
}
 
 