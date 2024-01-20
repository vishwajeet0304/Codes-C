#include<stdio.h>
int main()
{
    int a , b , c , choice;
    printf("enter two numbers: ");
    scanf("%d %d" ,&a , &b);
    printf("1 = addition \n");
    printf("2 = subtraction \n");
    printf("3 = multiplication \n");
    printf("4 = division \n");
    printf("enter your choice");
    scanf("%d" , &choice);
    switch (choice) 
    {
        case 1:
        c = a+b;
        printf("sum of %d and %d is %d" , a ,b,c);
        break;
        case 2:
        c= a-b;
        printf("difference of %d and %d is %d" , a,b,c);
        break;
        case 3:
        c = a*b;
        printf("product of %d and %d is %d" , a,b,c);
        break;
        case 4: 
        c = a/b;
        printf("quotient of %d and %d is %d" , a,b,c);
        break;
         default:
         printf("operations not available");
    }   
    }
