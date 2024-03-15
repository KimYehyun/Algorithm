#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    while(1){
        int n;
        cin >> n;
        if(n==0) break;
        int max = -10005;
        int sum = 0;
        int input;   
        for(int i=0;i<n;i++) {
            cin >> input;
            if(sum+input > input){
                sum += input; 
            }
            else{
                sum = input;
            }
            if(max < sum) {
                max = sum;
            }
        }
        cout << max << "\n";
     }
     
}