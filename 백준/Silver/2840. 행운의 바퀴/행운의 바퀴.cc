#include <bits/stdc++.h>
using namespace std;
int alphabet[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,k;
    cin >> n >> k;
    vector<char>v(n);
    for(int i=0;i<n;i++){
        v[i] = '?';
    }
    bool check = 0; int cur = 0;
    int a; char s;

    for(int i=0;i<k;i++){   
        cin >> a >> s;
        cur += a;
        if(cur>=n) cur = cur%n;
        if(v[cur]=='?') {
            v[cur]=s;
            if(alphabet[s-65]==1){
                check = 1;
            }
            alphabet[s-65]=1;
        }
        else if(v[cur]==s){
            continue;
        }  
        else {
            check = 1;
        } 
    }
    if(check==1) cout <<"!";
    else{
        int c=0;
        for(int i=0,j=cur;i<n;i++,j--){
            if(j<0) j+=n;
            cout << v[j];
        }
    }
    return 0;
}