#include<bits/stdc++.h>
using namespace std;
int x,y,w,h,a,b;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> x >> y >> w >> h;
    a = min(x,y);
    b = min(w-x,h-y);
    cout << min(a,b);
    return 0;
}