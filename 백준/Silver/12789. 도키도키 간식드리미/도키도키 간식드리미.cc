#include <bits/stdc++.h>
using namespace std;
int n, t, cnt = 1;
stack<int>s;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    cin >> n;
    while(n--){
		cin >> t;
		if(t==cnt) cnt++; 
		else s.push(t); 
		while(!s.empty() && s.top()==cnt){
			s.pop(); 
			cnt++;
		}
	}
	
	if(s.empty()) cout << "Nice"; 
	else cout << "Sad";
    return 0;
}