// 2** 4**** 6****** 8********
#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        printf("%d",i);
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
          printf("\n");
    }

}