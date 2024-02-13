#include <bits/stdc++.h>
using namespace std;
int n;
struct node{
    string str;
    int I ,D;
};
vector<node>v;

bool cmp(node &a, node &b){
    return a.I < b.I;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        string s; int a, b;
        cin >> s >> a >> b;
        v.push_back({s,a,b});
    }

    sort(v.begin(),v.end(),cmp);

    string result ="";
    for(int i=0;i<n;i++){
        result+= v[i].str[v[i].D-1];
    }
    for(int i=0;i<result.size();i++){
        if(result[i]>='a' && result[i]<='z') result[i]-=32;
    }
    cout << result<<"\n";
    return 0;
}