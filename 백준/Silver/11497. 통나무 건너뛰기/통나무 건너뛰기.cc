#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        vector<int>result(n+1);
        int i = 0;
        int j = n-1;
        for(int k=0; k<n; k++){
            if(k%2){
                result[j] = v[k];
                j--;
            }
            else{
                result[i] = v[k];
                i++;
            }
        }
        result[n] = result[0];
        int max_v = 0;
        for(int i=1;i<=n;i++){
            max_v = max(max_v,abs(result[i]-result[i-1]));
        }
        cout << max_v<<"\n";
    }
    return 0;
}