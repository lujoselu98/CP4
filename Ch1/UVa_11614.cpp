#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    long long x;
    scanf("%d", &tc);
    while (tc--) {
        scanf("%lld", &x);
        printf("%lld\n", (long long) floor((-1 + sqrt(1 + 8 * x)) / 2));
    }
    return 0;
}