#include <iostream>
using namespace std;
int main() {
    iostream::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
  
    int n;
    cin >> n;
    int result = n + 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'L') {
            result--;
            i++;
        }
    }
    if (result > n) result = n;

    cout << result;

    return 0;
}