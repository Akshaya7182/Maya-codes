#include <stdio.h>
int main() {
    double basic;
    scanf("%lf", &basic);
    double DA, HRA;
    if (basic <= 10000) {
        DA = 0.80 * basic;
        HRA = 0.20 * basic;
    } else if (basic <= 20000) {
        DA = 0.90 * basic;
        HRA = 0.25 * basic;
    } else {
        DA = 0.95 * basic;
        HRA = 0.30 * basic;
    }
    double gross = basic + DA + HRA;
    printf("%.2lf", gross);
    return 0;
}

