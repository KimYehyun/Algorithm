#include<iostream>
#include<deque>
using namespace std;

int n, k;
deque<int> belt;
int cnt;
deque<bool> visit;

void move_belt() {

	belt.push_front(belt.back());
	belt.pop_back();
	
	visit.push_front(visit.back());
	visit.pop_back();
	visit[n - 1] = false;
	
	return;
}
void move_robot() {

	for (int i = n-2; i >= 0; i--) {
		if ((visit[i + 1] == false && belt[i+1]>0)&&visit[i]==true) {
			visit[i] = false;
			visit[i + 1] = true;
			belt[i+1]--;
		}
		visit[n - 1] = false;
	}
	return;	
}

void new_robot() {
	if (visit[0] == false && belt[0] >= 1) {
		visit[0] = true;
		belt[0]--;
	}
	return;
}

int check() {
	int count = 0;
	for (int i = 0; i < n * 2; i++) {
		if (belt[i] == 0)
			count++;
	}
	return count;
}


int main(void) {
	cnt = 1;
	cin >> n >> k;
	for (int i = 0; i < 2 * n; i++) {
		int a;
		cin >> a;
		belt.push_back(a);
		visit.push_back(false);
	}
	
	while (1) {
	
		move_belt();
		move_robot();
		new_robot();
		int c = check();
		if (c >= k) {
			cout << cnt << endl;
			return 0;
		}
		cnt++;	
	}


	return 0;
}
