#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int ma[3]={0,};
int mi[3]={213467890,};
int input[3];
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
   
    cin >> mi[0] >> mi[1] >> mi[2];
    ma[0] = mi[0], ma[1] = mi[1], ma[2] = mi[2];
    
    for (int i = 1; i < n; i++) {
        cin >> input[0] >> input[1] >> input[2];
        int a = ma[0], b = ma[1], c = ma[2];
        ma[0] = max(a, b) + input[0];
        ma[1] = max({ a,b,c }) + input[1];
        ma[2] = max(b,c) + input[2];
        
        a = mi[0], b = mi[1], c = mi[2];
        mi[0] = min(a, b) + input[0];
        mi[1] = min({ a,b,c }) + input[1];
        mi[2] = min(b, c) + input[2];
    }

    int max_v = max({ma[0],ma[1],ma[2]});
    int min_v = min({mi[0],mi[1],mi[2]});


    cout << max_v << " " << min_v << '\n';

    return 0;
}
