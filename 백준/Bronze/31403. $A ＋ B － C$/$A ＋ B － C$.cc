#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int A,B,C;
    cin >> A >> B >> C;
    cout << A+B-C<<"\n";
    string str = to_string(A) + to_string(B);
    cout << stoi(str) - C<<"\n";
    return 0;
}