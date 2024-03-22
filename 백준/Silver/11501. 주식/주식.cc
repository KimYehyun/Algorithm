#include <bits/stdc++.h>
using namespace std;
int arr[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    for(int tc=0;tc<t;tc++){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int max_v = arr[n-1];
        long long result = 0;
        for(int i=n-1;i>=0;i--){
          if(arr[i]>max_v) max_v = arr[i];
          else result += (max_v - arr[i]);
        }
        cout << result<<"\n";
    }
    
    return 0;
}