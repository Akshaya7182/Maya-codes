#include <stdio.h>
int main() {
    int A, B;
    if (scanf("%d %d", &A, &B) != 2) return 0;
    int s = A + B;
    int result = s * 10 + 1;   
    printf("%d", result);
    return 0;
}

