// 1,1,2,3,5,8,13,21,34
#include<stdio.h>
int main()
{
    int a=0,b=1,c=0;
    while (c<34)
    {
        c=a+ b;
        printf(" %d ",c);
        b=a;
        a=c;

    }
}