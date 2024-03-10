#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
map<string, int>m;
vector<pair<string,int>>v;

bool cmp(pair<string,int> &a, pair<string,int> &b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i=0;i<n;i++){
        string t="",name="";
        cin >> t >> name;
        int a = 0;
        string h = t.substr(0,2);
        string s = t.substr(3,2);
        //cout << h <<" "<<s<<"\n";
        a = stoi(h) * 60 + stoi(s);
        m[name] += a;
    }
    
    for(auto a : m){
        if(a.second <= 100) v.push_back({a.first, 10});
        else{
            int b = 0;
            b += ((a.second-100) / 50)*3;
            if((a.second-100) % 50 != 0) b+=3;
            v.push_back({a.first,10+b});
        }
    }
    
    sort(v.begin(),v.end(),cmp);
    
    for(auto a : v){
        cout << a.first <<" "<<a.second<<"\n";
    }
    
    return 0;
}