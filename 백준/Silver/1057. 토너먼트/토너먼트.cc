#include <iostream>
using namespace std;
int main (void){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, kim, lim;
    int ans = 0;
    cin >> n >> kim >> lim;

    while(kim != lim){
        kim = (kim+1)/2;
        lim = (lim+1)/2;
        ans++;
    }
    cout << ans; 
    return 0;
}