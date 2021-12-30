#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc, n, last_h, h, i = 1;
    scanf("%d", &tc);
    while (tc--) {
        scanf("%d", &n);
        scanf("%d", &last_h);
        n--;
        int sal_a = 0, sal_b = 0;
        while (n--) {
            scanf("%d", &h);
            if (last_h > h)
                sal_b++;
            else if (last_h < h)
                sal_a++;
            last_h = h;
        }
        printf("Case %d: %d %d\n", i, sal_a, sal_b);
        i++;
    }
    return 0;
}