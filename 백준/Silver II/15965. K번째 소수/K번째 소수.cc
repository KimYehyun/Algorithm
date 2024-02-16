#include <iostream>
#include<cmath>
#include<vector>
using namespace std;
bool arr[7500001];
vector<int>v;
void solve() {
     
    arr[0] = 1;
    arr[1] = 1;
     for (int i = 2; i <= sqrt(7500000); i++) {
         if (arr[i] == 1) continue;
         for (int j = i * i; j <= 7500000; j += i) {
            arr[j] = 1;
         }
     }

     for (int i = 2; i <= 7500000; i++) {
         if (arr[i] != 1) v.push_back(i);
     }

     return;
    
}
int main() {
    iostream::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    int n;
    cin >> n;
    cout << v[n - 1];
    
    return 0;
}