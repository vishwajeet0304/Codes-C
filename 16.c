// sum of positive negative and zero individually
#include<stdio.h>
int main()     
{                
    int n,s=0,s2=0,s3=0,i;
    for (i=0;i<=10;i++)
    {
    printf("enter the number");
    scanf("%d",&n);
    if (n>0)
    {
    s=s+n;
    }
    else if (n<0)
    {
        s2 = s2 + n;    
    }
    else 
    s3=s3+n;
}
  printf("%d %d %d",s,s2,s3);
}


    
