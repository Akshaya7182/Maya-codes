#include <stdio.h>
#include <math.h>

int main() {
    double P, R, T;
    scanf("%lf", &P);
    scanf("%lf", &R);
    scanf("%lf", &T);

    double amount = P * pow((1 + R / 100), T);
    double CI = amount - P;

    printf("%.2lf", CI);

    return 0;
}

