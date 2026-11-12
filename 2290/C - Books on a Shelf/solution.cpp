#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
          cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<int>lt,mid,rt;
        for(int i=0;i<n;){
            int j=i;
            while(j<n && v[i]==v[j]){
                j++;
            }
            int count=j-i;
            lt.push_back(v[i]);
            if(count>=2)rt.push_back(v[i]);
            for(int k=2;k<count;k++){
                mid.push_back(v[i]);
            }
            i=j;
        }
        reverse(rt.begin(),rt.end());
        int ans= lt.size()+rt.size();
        cout<<ans<<endl;
        for(int ele:lt)cout<<ele<<" ";
        for(int ele:mid)cout<<ele<<" ";
        for(int ele:rt)cout<<ele<<" ";
        cout<<"
";
    }
}