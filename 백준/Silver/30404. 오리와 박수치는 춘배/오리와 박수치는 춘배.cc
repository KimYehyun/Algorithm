#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[100001];
queue<int>q;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        q.push(a);
    }
    int ans = 0, k = 0;
    while(!q.empty()){
        if(q.front()<=k){
            q.pop();
        }
        else{
            ans++;
            k = q.front()+m;
        }
    }
    cout << ans;
    return 0;
}