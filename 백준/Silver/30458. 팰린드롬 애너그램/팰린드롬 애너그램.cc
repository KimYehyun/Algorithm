#include<iostream>
#include<map>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    map<char, int> m;
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (n % 2 == 1 && i == n / 2) continue;
        m[s[i]]++;
    }

    bool a = 0;
    for (auto k : m) {
        if (k.second % 2 != 0) {
            if (a) {
                cout << "No";
                return 0;
            }
            a = 1;
        }
    }

    cout << "Yes";

    return 0;
}