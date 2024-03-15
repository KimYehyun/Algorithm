#include <bits/stdc++.h>
using namespace std;
deque<int>dq;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int a;
    while(1){
        cin >> a;
        if(a==-1) break;
        else if(a==0){
            dq.pop_front();
        }
        else{
            if(dq.size()==n) continue;
            else{
                dq.push_back(a);
            }
        }
    }
    if(dq.size()==0) cout <<"empty";
    else{
        for(int i=0;i<dq.size();i++){
            cout << dq[i]<<" ";
        }
    }
    return 0;
}