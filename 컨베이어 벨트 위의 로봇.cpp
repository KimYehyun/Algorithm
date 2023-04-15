#include<iostream>
#include<deque>
using namespace std;

int n, k;
deque<int> belt(201);
int cnt;
bool visit[101];

void move_belt() {
	belt.push_front(belt[2*n-1]);
	belt.erase(belt.begin() + (2*n));
	return;
}
void new_robot() {
	if (visit[0] == false && belt[0] >= 1) {
		visit[0] = true;
		belt[0]--;
	}
	return;
}

int main(void) {

	cin >> n >> k;
	for (int i = 0; i < 2*n; i++) {
		cin >> belt[i];
	}

	while (cnt < k) {
		cnt++;
		move_belt();
		new_robot();

	}
	cout << cnt << endl;
	
	return 0;
}

