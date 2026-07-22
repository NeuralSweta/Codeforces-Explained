#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   cin>> n;
   vector<bool> prime(n+2,true);
   prime[0]=prime[1]=false;
   for(int i=2;i*i<=n+1;i++){
       if(prime[i]){
         for(int j=i*i;j<=n+1;j+=i){
            prime[j]= false;
         }
       }
   }
   vector<int> color(n+2,1);
   for(int i=2;i<=n+1;i++){
       if(!prime[i]) color[i]=2;
   }
       int total= *max_element(color.begin(),color.end());
       cout<< total<< endl;
       for(int i=2;i<=n+1;i++){
           cout<< color[i]<< " ";
       }
    return 0;
}
