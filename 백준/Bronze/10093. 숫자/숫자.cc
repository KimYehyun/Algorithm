#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b, cnt = 0;
    cin >> a >> b;
    if(a>b){
        int tmp = b;
        b = a;
        a = tmp;
    }
    vector<int>v;
    for(int i=a+1;i<b;i++){
        v.push_back(i);
        cnt++;
    }
    cout << cnt<<"\n";
    if(cnt != 0){
        for(auto k : v){
            cout << k <<" ";
        }
    }
    
    return 0;
}