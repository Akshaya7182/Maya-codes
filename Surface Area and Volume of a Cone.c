#include <stdio.h>

int main() {
    int side;
    int surfaceArea, volume;

    scanf("%d", &side);

    surfaceArea = 6 * side * side;   
    volume = side * side * side;     

    printf("Surface area = %d and Volume = %d", surfaceArea, volume);

    return 0;
}

