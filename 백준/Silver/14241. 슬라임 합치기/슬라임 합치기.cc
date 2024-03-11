#include <iostream>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>>pq; 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   
    int n; 
    cin >> n;
    while (n--) {
        int a; 
        cin >> a;
        pq.push(a);
    }
    int sum = 0, ans = 0;
    while (pq.size() != 1) {
        int tmp1 = pq.top(); pq.pop();
        int tmp2 = pq.top(); pq.pop();
        sum = tmp1 + tmp2;
        ans += tmp1 * tmp2;
        pq.push(sum);
    }
    cout << ans;
    return 0;
}