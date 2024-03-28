#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,m,k;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
   deque<int>dq;
    for(int i=1;i<=n;i++){
       dq.push_back(i);
    }
   
    int cnt = 0;
    int i =0;
    bool chk = 0;
    while(!dq.empty()){
        i++;
        if(chk==0){
          if(i==m){
            cout << dq.front()<<"\n";
            dq.pop_front();
            i = 0;
            cnt++;
          }
          else{
           dq.push_back(dq.front());
           dq.pop_front();
          }
          if(cnt==k){
              chk = 1;
              cnt = 0;
          }
        }
            
        else{

          if(i==m){
             cout << dq.back()<<"\n";
             dq.pop_back();
             i = 0;
             cnt++;
           }
           else{
            dq.push_front(dq.back());
            dq.pop_back();
            }
            if(cnt==k) {
                chk = 0;
                cnt = 0;
            }     
        }      
    }
    return 0;
}