#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll add[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        add[i] = add[i-1]+a;
    }

    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        cout << add[b] - add[a-1] <<"\n";   
    }
    
    return 0;
}