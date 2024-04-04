#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    for(int tc=0;tc<t;tc++){
        long long result = 1;
        int n=0, m=0;
        cin >> n >> m;
        for(int i=m,j=1;i>m-n;i--,j++){
            result *= i;
            result /= j;
        }
        cout << result<<"\n";
    }
    return 0;
}