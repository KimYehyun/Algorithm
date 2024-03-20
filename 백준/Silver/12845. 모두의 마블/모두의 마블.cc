#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[1001];
int main()
{
    ios::sync_with_stdio(0), 
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    ll max_v = 0, idx = 0;
    for(ll i=0;i<n;i++){
        cin >> arr[i];
        if(max_v < arr[i]){
            max_v = arr[i];
            idx = i;
        }
    }
    if(n==1) {
        cout << arr[0];
        return 0;
    }
    ll cnt = 1;
    ll l = idx-1, r = idx+1;
    ll gold = 0;
    while(cnt<n){
        if(l>=0 && r<n){
            if(arr[l] < arr[r]){
                gold += (arr[idx]+arr[r]);
                arr[r] = arr[idx];
                r++;       
            }
            else{
                gold += arr[idx]+arr[l];
                arr[l] = arr[idx];
                l--;
            }
        }
        else if(l==-1){
            gold += (arr[idx]+arr[r]);
            arr[r] = arr[idx];
            r++;
        }
        else if(r==n){
             gold += arr[idx]+arr[l];
             arr[l] = arr[idx];
             l--;
        }
        /*for(int i=0;i<n;i++){
            cout << arr[i]<<" ";
        }cout <<"\n";
        cout << gold<<"\n";*/
        cnt++;
    }
    cout << gold;
    return 0;
}