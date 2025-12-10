#include <stdio.h>
int main() {
    int units;
    scanf("%d", &units);

    double bill;

    if (units < 200) {
        bill = units * 1.20;
    } else if (units < 400) {
        bill = units * 1.50;
    } else if (units < 600) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }

    double surcharge;
    if (bill > 400) {
        surcharge = bill * 0.15;
    } else {
        surcharge = 100.0;
    }

    double total = bill + surcharge;

    printf("%.2lf", total);

    return 0;
}

