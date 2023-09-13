#include<iostream>
using namespace std;
int main(void){
    string s1;
    string s2;
    cin >> s1 >> s2;
    
    if(s1.size()>=s2.size())
        cout<<"go"<<"\n";
    else
        cout<<"no"<<"\n";
    
    return 0;
}