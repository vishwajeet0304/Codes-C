//sum of matrix
// Online C compiler to run C program online
#include <stdio.h>

int main() { 
    int mat1[2][2], mat2[2][2],sum1[2][2]={0};
     
    printf("Enter the elements of a First Matrix\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the %d%d element of a matrix\n", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    // scanning the elements of 2nd matrix
    printf("\nEnter the elements of second matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the %d%d element of a matrix\n", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    // sum of a matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum1[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\n");
    // printing the sum
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t", sum1[i][j]);
        }
        printf("\n");
    }
    return 0;
}