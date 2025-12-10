#include <stdio.h>
int main() {
    int X, Y, H;
    scanf("%d %d %d", &X, &Y, &H);
    int totalCharge;
    if (H <= 1) {
        totalCharge = X;
    } else {
        totalCharge = X + (H - 1) * Y;
    }
    printf("%d", totalCharge);
    return 0;
}

