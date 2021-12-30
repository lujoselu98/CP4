#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i = 1;
    while (scanf("%d", &n) && n != 0) {
        int v, r = 0;
        for(int k = 0; k < n; k++){
            scanf("%d", &v);
            if (v != 0)
                r++;
            else
                r--;
        }
        printf("Case %d: %d\n", i, r);
        i++;
    }
    return 0;
}
