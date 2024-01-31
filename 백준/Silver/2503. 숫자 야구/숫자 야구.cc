#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
struct node {
	string num;
	int s;
	int b;
};
vector<node>input;

vector<char>v;
bool visited[11];

int cnt = 0;

void solve() {

	int s_c = 0;
	int b_c = 0;
	bool flag = 0;
	for (int i = 0; i < n; i++) {
		s_c = 0;
		b_c = 0;
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {	
				if (input[i].num[j] == v[k]) {
					if (j == k) s_c++;
					else b_c++;
				}
			}
		}
		if (input[i].s != s_c || input[i].b != b_c) {
			flag = 1;
			break;
		}
		
	}

	if (flag == false) {
		cnt++;
	}
}




void dfs() {
	
	if (v.size()==3) {
		
	     solve();
		
		return;
	}

	for (int i = 1; i <= 9; i++) {
		if (!visited[i]) {
			visited[i] = 1;
			v.push_back(i+'0');
			dfs();
			visited[i] = 0;
			v.pop_back();
		}
	}

}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str; int a, b;
		cin >> str >> a >> b;;	
		input.push_back({str, a, b});
	}

	dfs();
	cout << cnt;

	return 0;
}