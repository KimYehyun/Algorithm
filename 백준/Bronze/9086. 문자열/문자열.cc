#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    string str;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str;
        cout << str[0] << str[str.size()-1]<<"\n";
    }
   return 0;    
}