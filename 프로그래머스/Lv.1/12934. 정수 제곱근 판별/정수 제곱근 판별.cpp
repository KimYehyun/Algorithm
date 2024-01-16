#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long a = sqrt(n);
    double b = sqrt(n);
    if(b-a==0){
        answer= pow(a+1,2);
    }
    else{
        answer = -1;
    }
    return answer;
}