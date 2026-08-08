#include <bits/stdc++.h>
using namespace std;
#define ll long long
  
 main(){
  ll t;
  cin>> t;
  while(t--){
      ll n,r,b;
      cin>> n>>r>>b;
      string str;
      while(r+b>0){
      double numRed=ceil((double)r/(b+1));
       while(numRed>0){
           str+='R';
           numRed--;
           r--;
       }
       while(b>0){
       str +='B';
       b--;
       break;
       }
      }
      cout<<str<<endl;
  }
  return 0;
}