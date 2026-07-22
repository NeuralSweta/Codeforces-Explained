#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long t;
   cin>> t;
   while(t-->0){
       long long n;
       cin>> n;
       vector<long long> v(n);
       for(auto i=0;i<n;i++){
           cin >> v[i];
       }
       sort(v.begin(),v.end());
       long long k= n/2+1;
       if(k>n-1){
           cout << -1 << endl;
           continue;
       }
       long long sum= accumulate(v.begin(),v.end(),0LL);
       long long avg= v[k-1];
       long long x= max(0LL,(2*n*avg-sum)+1);
       cout<< x << endl;
   }
           
       
    return 0;
}