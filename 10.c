#include<stdio.h>
int main()
{
    int n , s = 0 , i;
    float avg;
    int av;
     for ( i = 0 ; i < 10 ; i++)
     {
       printf("enter the no");
        scanf("%d" , &n);
        s = s + n;
     }
     
   
    avg =(float) s/i ;
    av=(int) avg;
    // type casting converting float to int and vice versa
    printf("sum = %d"  , s);
    printf( "\naverage = %f  %d" , avg,av);
}