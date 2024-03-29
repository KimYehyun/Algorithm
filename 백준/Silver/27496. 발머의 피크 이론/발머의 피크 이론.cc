#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[1000001];
long long sum;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int a = 0,b = 0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
        if(a>=m){
            sum-=arr[b];
            b++;
        } 
        a++;
        if(sum>=129 && sum <=138) cnt++;
    }
    cout << cnt;
    return 0;
}