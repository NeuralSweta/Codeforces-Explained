#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k, m;
    scanf("%d %d %d", &n, &k, &m);
    
    vector<vector<int>> groups(m);
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        int r = x % m;
        if((int)groups[r].size() < k) 
            groups[r].push_back(x);
    }
    
    for(int r = 0; r < m; r++){
        if((int)groups[r].size() >= k){
            printf("Yes
");
            for(int i = 0; i < k; i++)
                printf("%d ", groups[r][i]);
            printf("
");
            return 0;
        }
    }
    
    printf("No
");
    return 0;
}