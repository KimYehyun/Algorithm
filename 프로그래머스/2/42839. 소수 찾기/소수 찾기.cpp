#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;

bool isPrime(int number)
{

    if (number == 0 || number == 1)
        return false;

    int lim = sqrt(number);
    for (int i = 2; i <= lim; i++)
        if (number % i == 0)
            return false;

    return true;
}

int solution(string numbers) {
    int answer = 0;
    set<int>ans;
    sort(numbers.begin(),numbers.end());
    do{
        string tmp;
        for(int i=0;i<numbers.size();i++){
            tmp += numbers[i];
            if(isPrime(stoi(tmp))){
                ans.insert(stoi(tmp));
            }
        }
    }while(next_permutation(numbers.begin(),numbers.end()));
   
    answer = ans.size();
    
    
    return answer;
}