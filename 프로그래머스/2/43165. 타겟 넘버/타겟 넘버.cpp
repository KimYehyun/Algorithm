#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    queue<pair<int,int>>q;
    int Size = numbers.size();
    q.push({numbers[0], 1});
    q.push({-numbers[0], 1});
  
    while (!q.empty()) {
        int num = q.front().first;
        int cnt = q.front().second;
        q.pop();
       
        if (cnt == Size) {
            if (num == target) {
                answer++;
            }
        }
       
        else {
            q.push({num + numbers[cnt], cnt + 1});
            q.push({num - numbers[cnt], cnt + 1});
        }
    }
    return answer;
}