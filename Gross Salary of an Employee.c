#include <stdio.h>

int main() {
    float salary, hra, da;
    float pf, gross;

    scanf("%f", &salary);
    scanf("%f", &hra);
    scanf("%f", &da);

    pf = 0.12 * salary;                   
    gross = salary + hra + da + pf;       

    printf("%.2f", pf);
    printf("%.2f", gross);

    return 0;
}

