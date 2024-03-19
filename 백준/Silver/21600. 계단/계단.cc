#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int k = 1;
    int cnt = 0;
    int max_v = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a >= k) {     
            k++;
            cnt++;
        }
        else {
            max_v = max(max_v, cnt);
            k = a;
            cnt = a;    
        }
    }
    max_v = max(max_v, cnt);
    cout << max_v;
    return 0;
}