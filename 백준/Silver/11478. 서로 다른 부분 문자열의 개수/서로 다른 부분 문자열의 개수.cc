#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    set<string>se;
    string s="";
    cin >> s;
    
    string str = "";
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            str += s[j];
            se.insert(str);
        }
        str = "";
    }
    cout << se.size();
    return 0;
}