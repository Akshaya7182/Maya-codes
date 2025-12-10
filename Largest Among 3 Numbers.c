#include <stdio.h>

int main() {
    int Num1, Num2, Num3;
    scanf("%d %d %d", &Num1, &Num2, &Num3);

    int largest = Num1;

    if (Num2 > largest) {
        largest = Num2;
    }
    if (Num3 > largest) {
        largest = Num3;
    }

    printf("%d", largest);

    return 0;
}

