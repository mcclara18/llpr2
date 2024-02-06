
#include <stdio.h>

int main()
{
    int a,b;
    int *pta,*ptb;
    printf("a:\n");
    scanf("%d",&a);
    printf("b:\n");
    scanf("%d",&b);
    pta=&a;
    ptb=&b;
    *pta=*pta+*ptb;
    *ptb=*pta-*ptb;
    *pta=*pta-*ptb;
    printf("a:%d \nb:%d ",a,b);
    return 0;
}
