#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string str,s;
int cnt;
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	getline(cin, str);
	getline(cin, s);

    
    while (1) {
        int a = str.find(s);
        if (a != -1) {
            cnt++;
            str = str.substr(a + s.size());   
        }
        else 
            break;   
    }
    cout << cnt<<"\n";
	return 0;
}