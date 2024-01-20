// input a string. find out the length of string
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("enter string: ");
    gets(str);
    for (i=0;str[i]!=NULL;i++);
    printf("Length = %d",i);
}