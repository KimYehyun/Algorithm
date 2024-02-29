#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int A,B;
    map<int,int>m;
    cin >> A >> B;
    for(int i=0;i<A;i++){
        int a;
        cin >> a;
        m[a]++;
    }
     for(int i=0;i<B;i++){
        int b;
        cin >> b;
        m[b]++;
    }
    int cnt = 0;
    for(auto n : m){
        if(n.second > 1)continue;
        cnt++;
    }
    cout << cnt;
    return 0;
}