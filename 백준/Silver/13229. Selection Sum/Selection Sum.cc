#include <bits/stdc++.h>
using namespace std;
long long arr[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i!=0)arr[i] += arr[i-1];
    }

    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a>> b;
        if(a!=0) cout << arr[b]-arr[a-1]<<"\n"; 
        else cout << arr[b]<<"\n"; 
    }
    
    return 0;
}