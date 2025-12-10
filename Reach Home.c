#include <stdio.h>

int main() {
    long long X, Y;
    scanf("%lld %lld", &X, &Y);

    long long maxDistance = X * 5;

    if (maxDistance >= Y)
        printf("YES");
    else
        printf("NO");

    return 0;
}

