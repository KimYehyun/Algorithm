#include<iostream>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string board, result ="";
	cin >> board;
	int cnt_a = 0, cnt_b = 0;
	for (int i = 0; i < board.size(); i++) {
		if (board[i] == '.') {
			cnt_a = 0;
			continue;
		}
		cnt_a++;
		if (cnt_a == 4) {
			board[i] = 'A';
			board[i - 1] = 'A';
			board[i - 2] = 'A';
			board[i - 3] = 'A';
			cnt_a = 0;
		}
	}

	for (int i = 0; i < board.size(); i++) {
		if (board[i] == '.' || board[i] == 'A') {
			cnt_b = 0;
			continue;
		}
		cnt_b++;
		if (cnt_b == 2) {
			board[i] = 'B';
			board[i - 1] = 'B';	
			cnt_b = 0;
		}
	}

	bool a = 0;
	for (int i = 0; i < board.size(); i++)
		if (board[i] == 'X') a = 1;
	
	if (a == 1) cout << -1 << "\n";
	else cout << board;
	
    return 0;
}