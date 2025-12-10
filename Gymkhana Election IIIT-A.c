#include <stdio.h>
int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);
    long long minVotes = (M / 2) + 1;
    printf("%lld", minVotes);
    return 0;
}

