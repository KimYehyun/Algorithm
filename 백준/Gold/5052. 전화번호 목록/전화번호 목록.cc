#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string>phone_book;
bool solve() {
    bool answer = true;
    bool k = 1;
    sort(phone_book.begin(), phone_book.end());
    for (int i = 1; i < phone_book.size(); i++) {
        string a = phone_book[i];
        string b = phone_book[i - 1];
        bool aa = 0;
        for (int j = 0; j < b.size(); j++) {
            if (a[j] != b[j]) {
                aa = 1;
                break;
            }
        }
        if (aa == 1) continue;
        else if (aa == 0) {
            k = 0;
            break;
        }
    }
    if (k == 0) answer = 0;
    else answer = 1;

    return answer;
}
void input() {

}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            string str;
            cin >> str;
            phone_book.push_back(str);
        }
        bool result = solve();
        if (result == 0) cout << "NO" << "\n";
        else if(result == 1) cout << "YES" << "\n";
        phone_book.clear();
    }
	
	return 0;
}