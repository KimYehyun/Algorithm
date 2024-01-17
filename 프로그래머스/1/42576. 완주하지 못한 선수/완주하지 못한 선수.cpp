#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int>um;
    for(int i=0;i<participant.size();i++){
        um[participant[i]]++;
    }
    
    for(int i=0;i<completion.size();i++){
       um[completion[i]]--;
    }
    for(auto a : um){
        if(a.second!=0) answer = a.first;
    }
    
    return answer;
}