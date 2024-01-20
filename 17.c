// factorial of a number
#include<stdio.h>
int main()
{
    int fact = 1,num ;
    int i;
    printf("enter the number");
    scanf("%d",&num);
    for (i=1 ; i<=num ; i++)
    fact = fact *i;
    printf("factorial of %d is %d",num,fact);
}