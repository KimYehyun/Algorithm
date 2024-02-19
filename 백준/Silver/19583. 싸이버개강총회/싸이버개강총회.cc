#include<bits/stdc++.h>
using namespace std;
string S, E, Q;
int s, e, q;
map<string, int>ma;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> S >> E >> Q;
	string str = "";
	s += stoi(S.substr(0, 2))*60;
	s += stoi(S.substr(3, 2));
	e += stoi(E.substr(0, 2)) * 60;
	e += stoi(E.substr(3, 2));
	q += stoi(Q.substr(0, 2)) * 60;
	q += stoi(Q.substr(3, 2));
    int result=0;
    while(cin >> S >> E){
        int t = 0;
        t += stoi(S.substr(0, 2))*60;
    	t += stoi(S.substr(3, 2));
        if(t <= s){
            ma.insert({E,t});
            
        }
        else if(e<=t && t<=q){
            if(ma.erase(E))result++;
        }
    }
    cout << result;

    return 0;
}