#include<iostream>
#include<cmath>
#include<stack>
using namespace std;
int A, B, m;
int arr[30];
stack<int>s;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> A >> B >> m;
	for (int i = m-1; i >= 0; i--) {
		cin >> arr[i];
	}

	int key = arr[0];
	for (int i = 1; i < m; i++) {
		key += arr[i] * pow(A, i);
	}

	while (key) {
		s.push(key % B);
		key /= B;
	}

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}


	return 0;
}