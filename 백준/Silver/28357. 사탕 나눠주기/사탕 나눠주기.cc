#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long arr[1000000];
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for(long long i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    long long l =0 , r = arr[n-1];
    while(l<=r){
        long long mid = (l+r)/2;
        long long sum =0;
        for(int i=0;i<n;i++){
            if(arr[i]-mid>0)
                sum+= arr[i]-mid;
        }
        if(sum == k){
            l = mid;
            break;
        }
        if(sum<k){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
        
    }
    cout << l;
    return 0;
}