// prime no.s between 1 to 1000
#include<stdio.h>
int main()
{
    int num,i,n;
    printf("enter the numbers: ");
    scanf("%d",&n);
    if(n>=2)
    {
         
    for (num=1;num<=n;num++)
    {
         i=2;
         while (i<=num-1 )
         {
            if (num%i==0)
            break;
            i++;
         }
         if(num==i)
         printf("%d ",num);
    }
}
} 