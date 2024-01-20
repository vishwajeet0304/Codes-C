// scanf() for pointer
#include<stdio.h>
int main ()
{
    int *p1,*r1,*t1,*s1;
    int p,r,t,s;
    p1=&p;r1=&r;t1=&t;s1=&s;
    printf("enter amout,rate and time");
    scanf("%d %d %d",p1,r1,t1);
    *s1=(*p1)*(*r1)*(*t1)/100;
    printf("%d %d %d %d",p,r,t,s);
}