#include <bits/stdc++.h>
using namespace std;
 
long long gcd(long long a, long long b){
    while(b!=0){
    long long temp= b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main() {
   long long t;
   cin>> t;
   while(t-->0){
      long long  n;
       cin>> n;
       vector<long long> a(n);
       for(auto i=0;i<n;i++){
           cin>>a[i];
       }
       long long total=0;
       for(auto i=0;i<n;i++){
           total+=a[i];
       }
       long long maxScore=0;
       long long prefix=0;
       for(auto i=0;i<n-1;i++){
           prefix += a[i];
       long long score= gcd(prefix,total);
       maxScore= max(score,maxScore);
       }
       cout<< maxScore<<"
";
   }
    return 0;
}