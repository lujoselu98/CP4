#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc, n;
    scanf("%d", &tc);
    while (tc--) {
        scanf("%d", &n);
        printf("%d\n", abs((((((n * 567) / 9) + 7492) * 235) / 47) - 498) / 10 % 10);
    }
    return 0;
}