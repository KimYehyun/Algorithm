#include <iostream>
using namespace std;
int n, x, y;
int maxx = -10000, minx = 10000; 
int maxy = -10000, miny = 10000;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> n; 
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        if (x >= maxx) maxx = x;
        if (x < minx) minx = x;
        if (y >= maxy) maxy = y;
        if (y < miny) miny = y;
    }
    cout << (maxx - minx) * (maxy - miny);

    return 0;
}
