#include <stdio.h>
int main() {
    long long X;
    scanf("%lld", &X);
    if (4 * X <= 1000)
        printf("YES");
    else
        printf("NO");
    return 0;
}

