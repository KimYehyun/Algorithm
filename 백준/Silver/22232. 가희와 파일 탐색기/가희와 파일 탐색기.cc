#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int n, m;
vector<pair<string, string>>v;
map<string, int>ex;

bool cmp(pair<string, string>& a, pair<string, string>& b) {
    if (a.first != b.first)
        return a.first < b.first;
    else if (a.first == b.first) {
        bool a_chk = 0, b_chk = 0;
        if (ex.find(a.second) != ex.end()) a_chk = 1;
        if (ex.find(b.second) != ex.end()) b_chk = 1;

        if (a_chk == 1 && b_chk == 0) return true;
        else if (a_chk == 0 && b_chk == 1)return false;
        else if ((a_chk == 1 && b_chk == 1) || (a_chk == 0 && b_chk == 0)) return a.second < b.second;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str = "", name = "", extension = "";
        bool chk = 0;
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == '.') {
                chk = 1;
                continue;
            }
            if (chk == 0) name += str[j];
            else extension += str[j];
        }
        v.push_back({ name,extension });
    }
    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        ex.insert({ str,1 });
    }
    sort(v.begin(), v.end(), cmp);

    for (auto a : v) {
        cout << a.first << "." << a.second << "\n";
    }
    return 0;
}