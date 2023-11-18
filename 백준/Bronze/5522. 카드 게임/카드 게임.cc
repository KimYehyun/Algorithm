#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int sum = 0;
    for(int i=0;i<5;i++){
        int a;
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
}