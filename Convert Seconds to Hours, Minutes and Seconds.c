#include <stdio.h>
int main() {
    int seconds;
    int h, m, s;
    scanf("%d", &seconds);
    h = seconds / 3600;            
    seconds = seconds % 3600;
    m = seconds / 60;              
    s = seconds % 60;
    printf("H:M:S-%d:%d:%d", h, m, s);
    return 0;
}

