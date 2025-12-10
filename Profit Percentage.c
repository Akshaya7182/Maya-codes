#include <stdio.h>
#include <stdio.h>
int main ()
{
    int x,y;
    double a;
    scanf("%d %d",&x,&y);
    a=((double)(y-x)/x)*100;
    printf("%.2lf",a);
    return 0;
}
