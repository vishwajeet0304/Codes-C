#include<stdio.h>
// using do while 10.c
int main()
{
    int s = 0 , n , i ;
    float avg;
 i=0;
    do
    
    {
        printf("enter the no : ");
        scanf("%d" , &n);
        i++;
        s = s + n;
    } while (i<10);
    avg = (float) s/i;
    printf("sum = %d" , s);
    printf("\naverage = %f" , avg);
}
