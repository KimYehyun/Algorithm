#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    bool k = 1;
    sort(phone_book.begin(), phone_book.end());
    for(int i=1;i<phone_book.size();i++){
        string a = phone_book[i];
        string b = phone_book[i-1];
         bool aa = 0;
        for(int j=0;j<b.size();j++){
            if(a[j]!=b[j]) {
                aa =1;
                break;
            }
        }
        if(aa==1) continue;
        else if(aa==0) {
            k = 0;
            break;
        }    
    }
    if(k==0) answer = 0;
    else answer = 1;
    
    return answer;
}