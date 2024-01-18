#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int min_v = 0;
    int max_v = 0;
    for(int i=0;i<sizes.size();i++){
        if(sizes[i][0]<sizes[i][1]){
            int tmp = sizes[i][0];    
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;    
        }
    }
    
    for(int i=0;i<sizes.size();i++){
        max_v = max(max_v,sizes[i][0]);
        min_v = max(min_v,sizes[i][1]);
   }
 
    answer = max_v * min_v;
    
    return answer;
}