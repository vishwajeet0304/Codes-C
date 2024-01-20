// looping using pointer
#include<stdio.h>
int main()
{
    int i,*j;
    j=&i;
    for (*j=1;(*j)<=100;(*j)++)
    {
        printf("%d",i);
        printf("\n");
    }
}