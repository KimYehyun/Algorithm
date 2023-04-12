#include<iostream>
#include<deque>
using namespace std;

int n, k;
deque<int> dq(201);

void move_belt() {
	dq.push_front(dq[2*n-1]);
	dq.erase(dq.begin() + (2*n));
	return;
}

int main(void) {

	cin >> n >> k;
	for (int i = 0; i < 2*n; i++) {
		cin >> dq[i];
	}
	
	move_belt();

	for (int i = 0; i < 2 * n; i++) {
		cout << dq[i] << " ";
	}
	cout << "\n";



	return 0;
}

