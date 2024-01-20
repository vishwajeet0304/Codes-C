// if else using pointer
#include <stdio.h>
int main()
{
    int a,b,c;
    int *a1,*b1,*c1;
    a1=&a;b1=&b;c1=&c;
    printf("enter the 3 numbers");
    scanf("%d %d %d",a1,b1,c1);
    if ((*a1)>(*b1)&&(*a1)>(*c1))
    {
        printf("%d is gretatest",a);
    }
    else if ((*b1)>(*c1))
    {
        printf("%d is largest",b);
    }
    else printf("%d is largest",c);
}