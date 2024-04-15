#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int x, y, ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> x >> y;
    if(x>=y){
        ans = x + y + (y/10);
    }
    else{
        ans = x + y + (x/10);
    }
    cout << ans;
    return 0;
}