#include <stdio.h>
int main() {
    int R, C, E;
    scanf("%d %d %d", &R, &C, &E);
    int totalCells = (R + E) * C;
    printf("%d", totalCells);
    return 0;
}

