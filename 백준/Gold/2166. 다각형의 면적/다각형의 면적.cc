#include<iostream>
#include<vector>
#include <cmath>
using namespace std;


double CCW(double x1, double x2, double x3, double y1, double y2, double y3) {
	double a = (x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3);
	return a / 2;
}

int main(void) {
	int n;
	vector<pair<int, int>>v;
	double result = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}

	for (int i = 1; i < n; i++) {
		result += CCW(v[0].first, v[i - 1].first, v[i].first, v[0].second, v[i - 1].second, v[i].second);
	}

	printf("%0.1lf", round(10*abs(result))/10);

	return 0;
}