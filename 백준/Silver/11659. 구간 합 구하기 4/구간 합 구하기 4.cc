#include<iostream>
using namespace std;

int n, m;
int arr[100001];

int main() {

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        int a;
        scanf("%d", &a);
        arr[i] = a + arr[i - 1];
    }

    for (int i = 0; i < m; i++) {
        int s, e;
        scanf("%d %d", &s, &e);
        printf("%d\n", arr[e] - arr[s - 1]);
    }
    return 0;

}