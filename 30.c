#include<stdio.h>
// diagonal sum of a matrix
int main()
{
    int n[4][4]={{2,3,4,5},{6,7,8,9},{3,2,1,4},{5,6,7,8}};
    int i,sum=0;
    for (i=0;i<4;i++)
    {
    sum  = sum  + n[i][i];
    }
    printf("%d",sum);
    
}