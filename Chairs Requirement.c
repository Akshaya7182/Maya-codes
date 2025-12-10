#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int extra_chairs = X - Y;

    if (extra_chairs > 0) {
        printf("%d", extra_chairs);
    } else {
        printf("0");
    }

    return 0;
}

