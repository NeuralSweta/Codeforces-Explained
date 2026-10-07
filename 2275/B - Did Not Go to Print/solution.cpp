#include<bits/stdc++.h>
using namespace std;
#define ll long long
   
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        vector<bool>print(n+1,false);
        vector<int>st;
        for(int i=1;i<=n;i++){
            char c= s[i-1];
            if(c=='1'){
                st.push_back(i);
            } else if(c=='2'){
                if(!st.empty()){
                    print[st.back()]=true;
                    st.pop_back();
                } else{
                  print[i]=true;  
                } 
            }else{
              print[i]=true;  
            } 
        }
            vector<int> res;
            for(int i=1;i<=n;i++){
                if(!print[i])res.push_back(i);
            }
            cout<<res.size()<<"
";
            for(int x:res)cout<< x <<" ";
            cout<<"
";
        }
        return 0;
    }
  