#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m;
vector<string>v;
vector<string>v2;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        if (binary_search(v.begin(), v.end(), s)) {
            v2.push_back(s);
        }
    }
    sort(v2.begin(), v2.end());
    cout << v2.size() << "\n";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i]<<"\n";
    
}
