#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[101][101];
int result[101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
        sort(arr[i],arr[i]+m,greater<>());
    }
    
    for(int j=0;j<m;j++){
        vector<int>v; 
        int max_v = 0;
        for(int i=0;i<n;i++){
           if(max_v < arr[i][j]){
                max_v = arr[i][j];
                v.clear();
                v.push_back(i);
            }
            else if(max_v == arr[i][j]) v.push_back(i);
        }
        for(int i = 0; i<v.size();i++){
            result[v[i]]++;
        }       
    }
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        ans.push_back({result[i],i+1});
    }
    sort(ans.begin(),ans.end(),greater<pair<int,int>>());
    vector<int>answer;
    answer.push_back(ans[0].second);
    for(int i=1;i<ans.size();i++){
        if(ans[0].first==ans[i].first) answer.push_back(ans[i].second);
        else break;
    }
    sort(answer.begin(),answer.end());
    for(auto a : answer) cout << a<<" ";
    return 0;
}