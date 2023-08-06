#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

unsigned long long chk(vector<unsigned long long>& v, unsigned long long mid) {
    unsigned long long sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += mid / v[i];
    }
    return sum;
}

int main(void) {

    int n;
    unsigned long long k;
    unsigned long long mini = 1e18;

    scanf("%d %llu", &n, &k);

    vector<unsigned long long>v(n);
    for (int i = 0; i < n; i++) {
        scanf("%llu", &v[i]);
        mini = min(v[i], mini);
    }

    unsigned long long l = 1;
    unsigned long long r = mini*k;
    unsigned long long ans = 1e18;

    while (l <= r) {
        unsigned long long mid = (l + r) / 2;
        if (chk(v, mid) >= k) {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    printf("%llu", ans);
    return 0;
}