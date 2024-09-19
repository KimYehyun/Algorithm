#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll add[100001];
priority_queue<ll>temp;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        add[i] = add[i-1]+a;
    }

    int h = 0, t = k;

    while(t<=n){
        temp.push(add[t]-add[h]);
        t++;
        h++;
    }

    cout << temp.top();

    return 0;
}