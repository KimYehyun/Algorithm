#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    if(n==1) {
        cout <<1;
        return 0;
    
    } 
    sort(v.begin(),v.end());
    int f = v[0];
    int b = v[1];
    int cnt = 2;
    for(int i=2;i<v.size();i+=2){
        if(v[i] > f) {
            cnt++;
            f = v[i];      
        }
    } 
     for(int i=3;i<v.size();i+=2){
        if(v[i] > b) {
            cnt++;
            b =v[i];
            
        }
    }
    cout << cnt<<"\n";
    return 0;
}