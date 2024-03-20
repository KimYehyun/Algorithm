#include <iostream>
using namespace std;
long long N, A, B, C;
long long solve(int n)
{
    long long sum = 1;
    for(int i=1;i<=n;i++){
        sum *= i;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(0), 
    cin.tie(0); cout.tie(0);
    cin >> N >> A >> B >> C;
    cout << (solve(N) / (solve(A) * solve(B) * solve(C)));
    return 0;
}