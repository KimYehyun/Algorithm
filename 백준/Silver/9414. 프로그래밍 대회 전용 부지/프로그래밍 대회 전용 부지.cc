#include <bits/stdc++.h>
using namespace std;
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a;
        vector<int>v;
        while(1){
            cin >> a;
            if(a==0) break;
            v.push_back(a);
        }
        sort(v.begin(),v.end(),greater<>());
        long long sum=0;
        bool check = 0;
        for(int j=0;j<v.size();j++){
            sum+=2*pow(v[j],j+1);
            if(sum>5000000) {
                cout <<"Too expensive"<<"\n";
                check = 1;
                break;
            }     
        } 
        if(check==0)cout << sum <<"\n";
    }
    
    return 0;
}