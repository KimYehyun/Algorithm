#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N,B,H,W;
    cin >> N >> B >> H >> W;
    int ans = 500001;
    for(int i=0;i<H;i++){
        int cost;
        cin >> cost;
        for(int j=0;j<W;j++){
            int num;
            cin >> num;
            if(num < N) continue;
            if(B < N*cost) continue;
            ans = min(ans,N*cost);
            
        }
    }
    
    if(ans>B) cout <<"stay home";
    else cout <<ans;
    
    return 0;
}