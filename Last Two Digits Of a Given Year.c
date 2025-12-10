#include<stdio.h>
int main()
{
    int y,x;
    scanf("%d",&y);
    x=y%100;
    if(x<=9)
    {
        printf("0%d",x);
    }
else
{
    printf("%d",x);
}
return 0;
}
