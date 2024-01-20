// print 1, 11, 111, 1111,11111
#include<stdio.h>
int main()
{
    int n=0 , i=0 ;
    
    for(i=0;i<5;i++)
    {
        n=n*10+1;
        printf("\n %d",n);
    }
}