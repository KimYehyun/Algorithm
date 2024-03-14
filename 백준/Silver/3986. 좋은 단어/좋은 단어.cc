#include <bits/stdc++.h>
using namespace std;
string str;
int cnt;
void solve(){
    stack<char>s;
    for(int i=0;i<str.size();i++){
        if(s.empty()){
            s.push(str[i]);
        }
        else{
            if(s.top()==str[i]){
                s.pop();
            }
            else{
                s.push(str[i]);
            }
        }
    }

    if(s.empty()) cnt++;   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){   
        cin >> str;
        solve();
    }
    cout << cnt;
    return 0;
}