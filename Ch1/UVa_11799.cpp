#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc, n, i = 1, v;
    scanf("%d", &tc);
    while (tc--) {
        scanf("%d", &n);
        int s = -1;
        while (n--) {
            scanf("%d", &v);
            s = max(s, v);
        }
        printf("Case %d: %d\n", i, s);
        i++;
    }
    return 0;
}