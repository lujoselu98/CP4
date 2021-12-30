#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc, l, w, h, i = 1;
    scanf("%d", &tc);
    while (tc--){
        scanf("%d %d %d", &l, &w, &h);
        if ((l > 20) || (w > 20) || (h > 20))
            printf("Case %d: bad\n", i);
        else
            printf("Case %d: good\n", i);
        i++;
    }
    return 0;
}