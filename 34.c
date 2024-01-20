// number is perfect or not
#include<stdio.h>
int main()
{
int n,i=1,sum=0;
printf("enter the number");
scanf("%d",&n);
if (n<=0)
printf("invalid");
else
for (i=1;i<n;i++)
{
    if (n%i==0)
    
    sum = sum + i;
}
    
 if (sum==n)
    {
        printf("%d is a perfect no.",n);
    }


    else 
    printf ("%d is not a perfect no.",n);
}


 