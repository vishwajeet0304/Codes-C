#include<stdio.h>
int main()
{
    char a;
    printf("enter the character: ");
    scanf("%c",&a);
    if (a>='a' && a<='z') 
    {
        printf("%c is converted " , a-32);
    }
    else if( a>='A' && a<='Z')
    {
         printf ("%c is converted" , a+32);
    }
    else 
    printf("%c is invalid",a);
}