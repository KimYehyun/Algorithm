#include<iostream>
#include<vector>
using namespace std;

char arr[11][11];

void init() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = 46;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	init();
	int n;
	string str;
	cin >> n >> str;
	
	int i = 0, j = 0;
	for (int k = 0; k < str.size(); k++){	
		if (str[k] == 'U') {
			if (i-1 >= 0 && i-1 < n && j >= 0 && j < n) {
				if (arr[i][j] == 46 || arr[i][j]==124) {
					arr[i][j] = 124;
				}
				else {
					arr[i][j] = 43;
				}		
				if (i - 1 >= 0) {
					i -= 1;
					if (arr[i][j] == 46 || arr[i][j] == 124) {
						arr[i][j] = 124;
					}
					else {
						arr[i][j] = 43;
					}
				}
					
				else
					continue;
			}
		}
		else if (str[k] == 'D') {
			if (i+1 >= 0 && i+1 < n && j >= 0 && j < n) {
				if (arr[i][j] == 46 || arr[i][j] == 124) {
					arr[i][j] = 124;
				}
				else {
					arr[i][j] = 43;
				}
				if (i + 1 < n) {
					i += 1;
					if (arr[i][j] == 46 || arr[i][j] == 124) {
						arr[i][j] = 124;
					}
					else {
						arr[i][j] = 43;
					}
				}
					
				else
					continue;
			}
		}
		else if (str[k] == 'L') {
			if (i >= 0 && i < n && j-1 >= 0 && j-1 < n) {
				if (arr[i][j] == 46 || arr[i][j] == 45) {
					arr[i][j] = 45;
				}
				else {
					arr[i][j] = 43;
				}

				if (j - 1 >= 0) {
					j -= 1;
					if (arr[i][j] == 46 || arr[i][j] == 45) {
						arr[i][j] = 45;
					}
					else {
						arr[i][j] = 43;
					}
				}
					
				else
					continue;
			}
		}
		else if (str[k] == 'R') {
			if (i >= 0 && i < n && j+1 >= 0 && j+1 < n) {
				if (arr[i][j] == 46 || arr[i][j] == 45) {
					arr[i][j] = 45;
				}
				else {
					arr[i][j] = 43;
				}
				if (j + 1 < n) {
					j += 1;
					if (arr[i][j] == 46 || arr[i][j] == 45) {
						arr[i][j] = 45;
					}
					else {
						arr[i][j] = 43;
					}
				}
					
				else
					continue;
			}
			
		}

	}
	
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < n; b++) {
			cout << arr[a][b];
		}cout << "\n";
	}

	return 0;
}