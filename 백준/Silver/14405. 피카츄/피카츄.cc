#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str;
    cin >> str;
    reverse(str.begin(),str.end());
    while(!str.empty()){
        if(str[str.size()-1]=='p'&&str[str.size()-2]=='i'){
            str.pop_back();
            str.pop_back();
        }
        else if(str[str.size()-1]=='k'&&str[str.size()-2]=='a'){
            str.pop_back();
            str.pop_back();
        }
        else if(str[str.size()-1]=='c'&&str[str.size()-2]=='h'&&str[str.size()-3]=='u'){
            str.pop_back();
            str.pop_back();
            str.pop_back();
        }
        else{
            break;
        }
    }
    if(str.size()==0) cout <<"YES";
    else cout <<"NO";
    return 0;
}