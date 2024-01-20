#include<stdio.h>
// row and coloum sum in 5x5 matrix and sum in 5 coloum i.e n[4][4]
int main()
{
int matrix[5][5]={{1,2,3,4,0},{1,2,3,4,0},{1,2,3,4,0},{1,2,3,4,0},{0,0,0,0,0}};  
int i,j,rsum=0,csum=0;
for (i=0;i<4;i++)
{
    rsum = 0;
    for(j=0;j<4;j++)
    {
     rsum=rsum + matrix[ i ] [ j ];   
    }
    matrix[ i ] [ j ] = rsum;
}
for (i=0;i<=4;i++)
{
    csum=0;
    for(j=0;j<4;j++)
    {  
     csum=csum + matrix [ j ] [ i ];   
    }
    matrix[ j ] [ i ] = csum;
}
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
} 
