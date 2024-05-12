#include <iostream>
using namespace std;
bool check[10001];
int a, sum;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    for (int i = 1; i < 10001;i++){
        sum = 0;
        a = i;
        while(a !=0){
            sum += a % 10;
            a /= 10;
        }
        if(i+sum < 10001){
            check[i + sum] = 1;
        }   
    }
    
    for (int i = 1; i < 10001;i++){
        if(check[i]==0) cout << i << "\n";
    }
    return 0;
}