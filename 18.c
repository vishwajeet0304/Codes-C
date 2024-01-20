// input any no print sum of digit
#include<stdio.h>
int main ()
{
    int n,s=0,r;
    int n1;
    printf("enter the number");
    scanf("%d",&n);
    n1=n;
    while (n!=0)
    {
        r = n%10;
        s=s +r;
        n=n/10;
    }
    printf("sum of %d is %d",n1,s);
}