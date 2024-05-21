#include <bits/stdc++.h>
using namespace std;
int N, K, A, B;
int arr[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> K >> A >> B;
    
    for(int i=0;i<N;i++){
        arr[i]=K;
    }
    
    int ans = 0;
    while(1){
        if(arr[0]==0) break;
        for(int i=0;i<A;i++){
            arr[i] += B;
        }
        for(int i=0;i<N;i++){
            arr[i]-=1;
        }
        sort(arr,arr+N);  
        ans++;
    }
    cout << ans;
    return 0;
}