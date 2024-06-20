#include <bits/stdc++.h>
using namespace std;
struct node{
    int h,m,s;
};
vector<node>v;

bool cmp(node &i, node &j){
    if(i.h==j.h){
        if(i.m==j.m){
            return i.s < j.s;
        }
        return i.m < j.m;
    }
    return i.h < j.h;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a>> b>> c;
        v.push_back({a,b,c});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout << v[i].h <<" "<<v[i].m<<" "<<v[i].s<<"\n";
    }
    return 0;
}