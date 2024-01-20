// swapping using pointer
#include<stdio.h>
int main()
{
    int a,b,c; 
    int *a1,*b1,*c1;         
    a1=&a;
    b1=&b;
    c1=&c;
    printf("enter a and b");
    scanf("%d %d",a1,b1);
    *c1 = *a1;
    *a1 = *b1;
    *b1 = *c1;
    printf("%d %d",a,b);
    return (0);   
}    