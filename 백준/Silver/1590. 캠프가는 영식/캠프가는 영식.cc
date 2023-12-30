#include<iostream>
#include<set>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int N, T, S, I, C;
	set<int>s;
	cin >> N >> T;
	for (int i = 0; i < N; i++) {
		cin >> S >> I >> C;
		for (int j = 0; j < C; j++) {
			int Temp = S + (I * j);
			if (Temp> T) {
				s.insert(Temp - T);
				break;
			}
			else if (Temp == T) {
				s.insert(0);
			}
		}
	}

	if (s.size() == 0) {
		cout << -1 << "\n";
	}
	else {
		cout << *s.begin() << "\n";
	}
	return 0;
}