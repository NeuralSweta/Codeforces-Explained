 
  #include<bits/stdc++.h>
  using namespace std;
  
   #define ll long long 
   
   int main(){
       
       ll t;
       
       cin>>t;
       while(t--){
           ll x,k;
           cin>>x>>k;
           if( x%k==0){
               cout<<2<<endl;
               cout<<x-k+1<<" "<<k-1<<endl;
           }
           else{
               cout<<1<<endl;
               cout<<x<<endl;
           }
       }
       
       return 0;
   }