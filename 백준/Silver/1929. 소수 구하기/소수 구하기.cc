#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int m, n;
bool PrimeArray [1000000];
void Eratos(int n)
{
	if (n <= 1) return;

	for (int i = 2; i <= n; i++)
		PrimeArray[i] = true;

	for (int i = 2; i * i <= n; i++)
	{
		if (PrimeArray[i])
		{
			for (int j = i * i; j <= n; j += i)
				PrimeArray[j] = false;
		}
	}

}
int main(void) {

	scanf("%d %d", &m, &n);
	
	Eratos(n);

	for (int i = m; i <= n; i++) {
		if (PrimeArray[i] == true)
			printf("%d\n", i);
	}
	return 0;
}

