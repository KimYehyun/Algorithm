#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while (1) {
        string s;
        cin >> s;
        if (s == "*")
            break;
        int len = 1;
        bool surprising = true;

        while (len < s.length()) {
            vector<string> v;
            for (int i = 0; i < s.length(); i++) {
                if (i + len >= s.length())
                    break;
                string temp = "";
                temp += s[i];
                temp += s[i + len];
                v.push_back(temp);
            }
            for (int i = 0; i < v.size(); i++)
                for (int j = i + 1; j < v.size(); j++)
                    if (v[i] == v[j]) {
                        surprising = false;
                        break;
                    }
            if (!surprising)
                break;
            len++;
        }
        if (surprising)
            cout << s << " is surprising.\n";
        else
            cout << s << " is NOT surprising.\n";
    }

    return 0;
}