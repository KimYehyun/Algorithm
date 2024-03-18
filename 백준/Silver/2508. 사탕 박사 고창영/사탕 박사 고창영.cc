#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int x,y;
char arr[401][401];
int cnt = 0;
void input(){   
    cin >> x >> y;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin >> arr[i][j]; 
        }
   }
}
void solve_c(){
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            if(arr[i][j]=='>')
                if(j+2<y && arr[i][j+1]=='o'&&arr[i][j+2]=='<')
                    cnt++;                    
}

void solve_r(){
     for(int i=0;i<y;i++)
        for(int j=0;j<x;j++)
            if(arr[j][i]=='v')
                if(j+2<x && arr[j+1][i]=='o'&&arr[j+2][i]=='^')
                    cnt++;                    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int t=0;t<n;t++){
       cnt = 0;
       input();
       solve_c();
       solve_r();
       cout << cnt<<"\n";
    }
    return 0;
}