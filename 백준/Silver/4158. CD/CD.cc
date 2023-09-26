#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(void) {
	
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    while (1) {
        int n, m, cnt =0;
        unordered_set<int> s;
      
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            s.insert(a);
        }
        
        for (int i = 0; i < m; i++) {
            int a;
            cin >> a;
            if (s.find(a) != s.end()) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
   
   
return 0;
}