#include <stdio.h>
int main()
{
    int a=10,*b,c;
    b=&a;
    c=*b;
    printf("%d %d %d",a,*b,c);
    printf("\n %d %d %d",&a,&b,&c);
    *b=*b+10;
    printf("\n %d %d %d",a,*b,c);
    b=b+10;
    printf("\n %d %d %d",&a,b,&c);
}
