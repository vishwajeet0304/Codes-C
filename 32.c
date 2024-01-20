// lower diagonal sum of 4x4 matrix
#include<stdio.h>
int main()
{
    int n[4][4] = {{2,3,4,5},{6,7,8,9},{3,2,1,4},{5,6,7,8}};
    int i,j;
    for(i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            if (i+j==3)
            printf("\n %d",n[i][j]);    
        }
    }
}    