#include <bits/stdc++.h>
#include <string>
using namespace std;
string c_time,condition;
map<string,int>m;

void input(){
    cin >> c_time >> condition;
}

void solve_t(){
    c_time +=',';
    bool a = 0;
    string s1="",s2="";
    for(int i=0;i<c_time.size();i++){ 
        if(a==0 && c_time[i]!=':') s1+=c_time[i];
        else if(c_time[i]==':') a=1;
        else if(a==1 && c_time[i]!=',') s2+=c_time[i];
        else if(c_time[i]==','){
            m[s1] = stoi(s2);
            a=0;
            s1 ="",s2="";     
        }
    }  
}

int solve_c(){
    condition +='|';
    int min_v = 2134567890;
    int max_v = -1;
    string str="";
    for(int i=0;i<condition.size();i++){
        if(condition[i]!='&'&& condition[i]!='|'){
            str+=condition[i];
        }
        else if(condition[i]=='&'){
            max_v = max(m[str],max_v);
            str ="";
        }
        else if(condition[i]=='|'){
            max_v = max(m[str],max_v);
            str ="";
            min_v = min(max_v, min_v);
            max_v = -1;
        }
    }
    return min_v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        input();
        solve_t();
        int ans = solve_c();
        cout << ans<<"\n";
    }   
    return 0;
}