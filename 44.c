#include<stdio.h>
int main()
{
    int matrix1[2][2],matrix2[2][2],result[2][2],i,j;
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
        printf("enter the number");
        scanf("%d",&matrix1[i][j]);
       }
    }
    for(i=0;i<2;i++)
    {  
       for(j=0;j<2;j++)
       {
        printf("enter the number");
        scanf("%d",&matrix2[i][j]);    
       }
    }
    for(i=0;i<2;i++)
    { 
               for(j=0;j<2;j++)
       {
        result[i][j]=matrix1[i][j]+matrix2[i][j];
        printf("%d",result[i][j]);
    printf("\n");
    }
}
}       