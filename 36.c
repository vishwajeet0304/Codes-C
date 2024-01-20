// input any 10 no. find out the largest
#include<stdio.h>
int main()
{
    int n[11],i,l;
    for (i=0;i<=9;i++)
    {
        printf("enter no.");
        scanf("%d",&n[i]);
    }
    l=n[0];
    for (i=0;i<=9;i++)
    {
        if(l<n[i])
        l=n[i];
    }
    printf("%d is largest",l);
        
}  