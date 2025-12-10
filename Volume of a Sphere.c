#include <stdio.h>

int main() {
    int R;
    scanf("%d", &R);

    float volume = (4.0/3.0) * 3.14 * R * R * R;

    printf("%.2f", volume);

    return 0;
}

