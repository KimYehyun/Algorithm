#include<iostream>
using namespace std;
int n,m,ans;
bool ck[201][201];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        ck[a][b]=1;
        ck[b][a]=1;
    }
    for(int i=1;i<=n-2;i++){ 
        for(int j=i+1;j<=n-1;j++){ 
            for(int k=j+1;k<=n;k++){ 
                if(ck[i][j] || ck[j][k] || ck[i][k]) continue;
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}