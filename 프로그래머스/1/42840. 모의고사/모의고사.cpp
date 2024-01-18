#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int,int>&a, pair<int,int>&b){
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int P1[5]={1,2,3,4,5};
    int P2[8] = {2,1,2,3,2,4,2,5};
    int P3[10]={3,3,1,1,2,2,4,4,5,5};
    int p1 =0, p2 =0, p3 =0;
    int cnt1 =0, cnt2 =0, cnt3 =0;
    
    for(int i=0;i<answers.size();i++){
        if(p1==5) p1 =0;
        if(p2==8) p2 =0;
        if(p3==10) p3 =0;
        if(answers[i]==P1[p1]) {
            cnt1++;
        }
        if(answers[i]==P2[p2]){
            cnt2++;
        }
        if(answers[i]==P3[p3]){
            cnt3++;
        }
        p1++; p2++; p3++;
    }
    
    vector<pair<int,int>>v;
    v.push_back({cnt1,1});
    v.push_back({cnt2,2});
    v.push_back({cnt3,3});
    sort(v.begin(),v.end(),cmp);
    
   answer.push_back(v[0].second);
    if(v[0].first==v[1].first){
        answer.push_back(v[1].second);
    }
    if(v[0].first==v[2].first){
        answer.push_back(v[2].second);
    }
    
    
    return answer;
}