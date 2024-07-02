#include <bits/stdc++.h>
using namespace std;
vector<int>boy;
vector<int>girl;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        boy.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        girl.push_back(a);
    }
    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end());
    
    int ans  = 0;

    for(int i=0;i<n;i++){
        ans += abs(boy[i]-girl[i]);
    }
    cout << ans;
    return 0;
}