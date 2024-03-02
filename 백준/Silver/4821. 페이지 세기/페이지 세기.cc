#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int check[2000];
int n;
string str;
void init(){
    for(int i=0;i<2000;i++) check[i]=0;
}
void solve(){
    str+=',';
    string low ="", high="";
    bool a=0;
    for(int i=0;i<(int)str.size();i++){
        if(a==0 && str[i]!='-' && str[i]!=','){
            low += str[i];
        }
        else if(str[i]=='-'){
            a=1;
        }
        else if(a==1 && str[i]!='-' && str[i]!=','){
            high += str[i];
        }
        else if(str[i]==','){
            if(low=="") low +='0';
            if(high=="") high+='0';
            int l = stoi(low);
            int h = stoi(high);
            if(l <= h){
                for(int j =l;j<=h;j++) check[j]=1;
            }
            if(l>h && h==0) check[l] = 1;
            low = "";
            high ="";
            a = 0;
        }    
    }
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(check[i]) cnt++;
    }
    cout << cnt<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    while(cin >> n){
        if(n==0) break;
        init();
        cin >> str;
        solve();
    }
    return 0;
}