#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int>day;
    for(int i=0;i<progresses.size();i++){
        if((100-progresses[i])%speeds[i]==0){
            day.push_back((100-progresses[i])/speeds[i]);
        }
        else{
            day.push_back((100-progresses[i])/speeds[i] + 1);
        }    
    }
   
    int n = day[0];
    int cnt =1;
    for(int i=1;i<day.size();i++){
        if(n >= day[i]){
            cnt++;
        }
        else{
            answer.push_back(cnt);
            n = day[i];
            cnt =1;
        }
    }
    answer.push_back(cnt);
    return answer;
}