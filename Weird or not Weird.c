#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("weird");           // Odd
    } else if (n >= 2 && n <= 5) {
        printf("not weird");       // Even 2-5
    } else if (n >= 6 && n <= 20) {
        printf("weird");           // Even 6-20
    } else {
        printf("not weird");       // Even >20
    }

    return 0;
}

