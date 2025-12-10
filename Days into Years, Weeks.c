#include <stdio.h>
int main() {
    int D;
    int years, weeks;
    scanf("%d", &D);
    years = D / 365;          
    D = D % 365;            
    weeks = D / 7;            
    printf("%d%d", years, weeks);
    return 0;
}

