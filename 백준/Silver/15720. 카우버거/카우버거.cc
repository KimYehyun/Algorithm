#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int A[1001];
int B[1001];
int C[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> c;
    int mi = min({a,b,c});
    int ma = max({a,b,c});
    int sum = 0;
    for(int i=0;i<a;i++){
        cin >> A[i];
        sum += A[i];
    }
    for(int i=0;i<b;i++){
        cin >> B[i];
        sum += B[i];
    }
    for(int i=0;i<c;i++){
        cin >> C[i];
        sum += C[i];
    }

    sort(A,A+a,greater<>());
    sort(B,B+b,greater<>());
    sort(C,C+c,greater<>());
    int ans = 0;
    for(int i=0;i<mi;i++){
        ans += (A[i] + B[i] + C[i])*0.9;
    }
    for(int i = mi;i<ma;i++){
        ans += (A[i] + B[i] + C[i]);
    }
    cout << sum <<"\n" << ans;
    return 0;
}