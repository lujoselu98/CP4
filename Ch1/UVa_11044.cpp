#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc, n, m;
    scanf("%d", &tc);
    while (tc--) {
        scanf("%d %d", &n, &m);
        printf("%d", (n / 3) * (m / 3));
    }
    return 0;
}