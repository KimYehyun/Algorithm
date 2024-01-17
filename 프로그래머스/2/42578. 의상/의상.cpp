#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    unordered_map<string,int>um;
    for(int i=0;i<clothes.size();i++){
        um[clothes[i][1]]++;
    }
    int ans = 1;
    for(auto a : um){
        ans *= a.second+1;
    }
    answer = ans-1;
    return answer;
}