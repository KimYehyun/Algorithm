#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), 
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    for(int tc =0; tc<t; tc++){
        string n;
        cin >> n;
        int cnt = 0;
        string str ="";
        do{    
            if(cnt>2) break;
            cnt++;
            for(int i = 0;i<n.size();i++){
                if(cnt==2) str+=n[i];
            }
            
        }while(next_permutation(n.begin(),n.end()));
        if(cnt==1) cout <<"BIGGEST\n";
        else cout << str<<"\n";
        
    }

    return 0;
}