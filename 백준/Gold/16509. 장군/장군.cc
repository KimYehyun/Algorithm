#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
 
using namespace std;

int x1,y1,x2,y2;
int v[10][10];
int dx[8] = {3,3,2,-2,-3,-3,-2,2};
int dy[8] = {2,-2,-3,-3,-2,2,3,3};

struct node{
    int a,b,c;
};

bool check(int x,int y,int i){
  int tx = x2;
  int ty = y2;
  if(i==0)
    if((tx==x+1&&ty==y)||(tx==x+2&&ty==y+1)) return false;
  if(i==1)
    if((tx==x+1&&ty==y)||(tx==x+2&&ty==y-1)) return false;
  if(i==2)
    if((tx==x&&ty==y-1)||(tx==x+1&&ty==y-2)) return false;
  if(i==3)
    if((tx==x&&ty==y-1)||(tx==x-1&&ty==y-2)) return false;
  if(i==4)
    if((tx==x-1&&ty==y)||(tx==x-2&&ty==y-1)) return false;
  if(i==5)
    if((tx==x-1&&ty==y)||(tx==x-2&&ty==y+1)) return false;
  if(i==6)
    if((tx==x&&ty==y+1)||(tx==x-1&&ty==y+2)) return false;
  if(i==7)
    if((tx==x&&ty==y+1)||(tx==x+1&&ty==y+2)) return false;
  
  return true;
}
int bfs(){
  
  queue<node> q;
  q.push({x1,y1,0});
  v[x1][y1] = 1;
  while(!q.empty()){
    int x = q.front().a;
    int y = q.front().b;
    int cost = q.front().c;
    q.pop();
    if(x==x2 && y==y2){
      return cost;
    }
    for(int i=0; i<8; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx>=0 && ny>=0 && nx < 10 && ny < 9 && v[nx][ny]==0){
        if(check(x,y,i)==true){
          v[nx][ny]=1;
          q.push({nx,ny,cost+1});
        }
      }
    }
  }

  return -1;
}
 
int main(void){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> x1 >> y1 >> x2 >> y2;
    cout << bfs();
 
    return 0;
}