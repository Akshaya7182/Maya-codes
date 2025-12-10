#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X >= 4 && X % 2 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

