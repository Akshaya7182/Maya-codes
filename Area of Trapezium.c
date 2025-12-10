#include <stdio.h>
int main() {
    
    int base1, base2, height;
    float area;
    scanf("%d", &base1);
    scanf("%d", &base2);
    scanf("%d", &height);
    area = 0.5 * (base1 + base2) * height;   
    printf("%.4f", area);
    return 0;
}

