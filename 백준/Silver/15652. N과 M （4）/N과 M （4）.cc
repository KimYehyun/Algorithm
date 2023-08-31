#include<iostream>
using namespace std;

int n, m, arr[10];
bool visit[10];


void func(int num, int cnt) {
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = num; i <= n; i++)
    {
        visit[i] = 1;
        arr[cnt] = i;
        func(i, cnt + 1);
        visit[i] = 0;
    }
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);	
	cin >> n >> m;
	func(1,0);
	return 0;
}

