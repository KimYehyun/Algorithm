#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str;
    cin >> str;
    int cnt = 1;
    char num = str[0];
    for(int i=1;i<str.size();i++){
        char next = str[i]; 
        if(next <= num){
            cnt++;
        }  
        num = next;
    }
    cout << cnt;
    return 0;
}