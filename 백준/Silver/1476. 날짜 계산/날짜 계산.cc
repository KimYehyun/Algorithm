#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int e,s,m;
    cin >> e >> s >> m;
    int year = 1;
    while(1){
        if((year-e)%15==0 && (year - s)%28==0 && (year-m)%19==0)
            break;
        year++;
    }
    cout << year;
    return 0;
}