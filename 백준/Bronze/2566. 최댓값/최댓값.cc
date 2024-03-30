#include <iostream>
using namespace std;
int arr[10][10];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            cin >> arr[i][j];
        }
    }
    int max_v = -1; 
    int a=0, b=0;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(arr[i][j]>max_v){
                max_v = arr[i][j];
                a = i;
                b = j;
            }
        }
    }
    cout << max_v<<"\n"<<a <<" "<<b;
    return 0;
}