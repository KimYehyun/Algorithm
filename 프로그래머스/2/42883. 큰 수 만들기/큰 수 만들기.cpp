#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string number, int k) {
    string answer = "";
    int n = number.length() - k;
    int picked = -1;
 
    for(int i = n; i > 0; i--) {
        int max_v = -1;
        for(int j = picked + 1; j <= number.length() - i; j++) {
            if((number[j] - '0') > max_v) {
                max_v = number[j] - '0';
                picked = j;
            }
        }
        answer += number[picked];
    }

    return answer;
}