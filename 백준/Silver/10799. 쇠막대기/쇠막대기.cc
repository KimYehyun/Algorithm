#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s="";
    int ans = 0;
    cin >> s;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);
        else{ 
            if(s[i-1]=='('){ 
                st.pop();
                ans += st.size();
            }
            else{ 
                st.pop();
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}