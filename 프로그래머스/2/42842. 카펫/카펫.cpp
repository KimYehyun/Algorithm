#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    vector<pair<int,int>>v;
    for(int i = 1;i<=sqrt(yellow);i++){
        if(yellow%i==0){
            v.push_back({i,yellow/i});
        }
    }
    
    for(int i=0;i<v.size();i++){
        if(brown == (v[i].first+2)*(v[i].second+2)-yellow){
            answer.push_back(v[i].second+2);
            answer.push_back(v[i].first+2);
        }
    }
    
    return answer;
}