// input 10 no find out repeatation of 1 number n[0]
#include<Stdio.h>
int main()
{
    int n[10],srch,i=0,count=0;
    
    for (i=0;i<=9;i++)
    {
        printf("enter ten number");
        scanf("%d",&n[i]);
    }
    srch = n[0];
    for (i=0;i<=9;i++)
    {
        if (n[1]==srch)
        count++;
    }
    printf("highest repeated number is %d",srch);
}