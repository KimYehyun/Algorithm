#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[1001];
vector<int>v;
void init(){
    for(int i=2;i<=1000;i++) arr[i]=i;
    for(int i=2;i<=sqrt(1000);i++){
        if(arr[i]==0) continue;
        for(int j=i*i;j<=1000;j+=i){
            arr[j]=0;
        }
    }
    for(int i=2;i<=1000;i++){
        if(arr[i]!=0) v.push_back(arr[i]);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    init();
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<int>s1,s2;
    int cnt = 0;
    for(int i=0;i<=v.size();i++){
        bool b1=0,b2=0;
        if(a<=v[i] && v[i]<=b){
            s1.push_back(v[i]);
            b1 = 1;
        } 
        if(c<=v[i] && v[i]<=d) {
            s2.push_back(v[i]);
            b2= 1;
        }
        if(b1==1 && b2==1) cnt++;
    }
    if(!cnt){
        (s1.size() <= s2.size()) ? cout <<"yj" : cout <<"yt"; 
    }
    else{
        if(s1.size()==s2.size()){
            if(cnt%2==0) cout <<"yj";
            else cout <<"yt";
        }
        else if(s1.size() > s2.size()) cout <<"yt";
        else if(s1.size() < s2.size()) cout <<"yj";
    }
    return 0;
}