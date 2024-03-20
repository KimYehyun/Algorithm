#include <bits/stdc++.h>
using namespace std;
int A,B,C;
bool visited[202][202];
bool ans[202];
struct node{
    int a,b,c;
};

void bfs(){
    queue<node>q;
    q.push({0,0,C});
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        if(visited[cur.a][cur.b]) continue;
        visited[cur.a][cur.b] = 1;

        if(cur.a == 0) ans[cur.c]=1;

        //a->b
        if(cur.a + cur.b > B) q.push({(cur.a+cur.b)-B,B,cur.c});
        else q.push({0,cur.a+cur.b,cur.c});
    
        //a->c
        if (cur.a + cur.c > C)
            q.push({ (cur.a + cur.b) - C,cur.b,C });
        else
            q.push({ 0,cur.b,cur.a + cur.c });
 
        //b->a
        if (cur.b + cur.a > A)
            q.push({ A,(cur.b + cur.a) - A,cur.c });
        else
            q.push({ cur.b + cur.a, 0, cur.c });
 
        //b->c
        if (cur.b + cur.c > C)
            q.push({ cur.a,(cur.b + cur.c) - C,C });
        else
            q.push({ cur.a, 0, cur.b + cur.c });
 
        //c->a
        if (cur.c + cur.a > A)
            q.push({ A,cur.b,(cur.c + cur.a) - A });
        else
            q.push({ cur.c + cur.a,cur.b,0 });
 
        //c->b
        if (cur.c + cur.b > B)
            q.push({ cur.a,B,(cur.c + cur.b) - B });
        else
            q.push({ cur.a,cur.c + cur.b,0 });
    }
    
}

int main()
{
    ios::sync_with_stdio(0), 
    cin.tie(0); cout.tie(0);
    cin >> A >> B >> C;
    bfs();
    for(int i=0;i<=C;i++){
        if(ans[i]) cout << i<<" ";
    }
    return 0;
}