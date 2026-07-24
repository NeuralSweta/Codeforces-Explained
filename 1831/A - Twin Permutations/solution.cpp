#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long t;
   cin>> t;
   while(t-->0){
       int n;
       cin>> n;
       vector<int> a(n);
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       vector<int> b(n);
       int k= n+1;
       for(int i=0;i<n;i++){
           b[i]= k- a[i];
       }
       for(int i=0;i<n;i++){
           cout<< b[i] <<" ";
       }
       cout<< "
";
   }
    return 0;
}