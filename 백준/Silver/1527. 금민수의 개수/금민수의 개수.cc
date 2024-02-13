#include <bits/stdc++.h>
using namespace std;
int A, B;
long long result;

void solve(long long num) {
	if (num > B)
		return;

	if (A <= num && num <= B)
		result++;
	
	solve(num * 10 + 4);
	solve(num * 10 + 7);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
	cin >> A >> B;
	solve(4);
	solve(7);
    cout << result;
    return 0;
}