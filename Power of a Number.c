#include <stdio.h>
int main() {
    long long x, y, M;
    long long result = 1;
    scanf("%lld %lld %lld", &x, &y, &M);
    for (long long i = 0; i < y; i++) {
        result = (result * x) % M;
    }
    printf("%lld", result);
    return 0;
}

