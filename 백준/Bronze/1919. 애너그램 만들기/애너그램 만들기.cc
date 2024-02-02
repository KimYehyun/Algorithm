#include<iostream>
#include<cmath>
using namespace std;
int a[26];
int b[26];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
   
    string str1, str2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.size(); i++) {
        a[str1[i] - 'a']++;
    }
    for (int i = 0; i < str2.size(); i++) {
        b[str2[i] - 'a']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) cnt += abs(a[i] - b[i]);
    }
    cout << cnt << "\n";
    return 0;
}