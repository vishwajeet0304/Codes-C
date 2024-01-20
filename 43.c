// input any 10 item name and rate find out the most costlier item name 
#include<stdio.h>
int main()
{ 
    int l,p;
    char item[10][20];
    int rate [10];
    int i,j;
    for (i=0;i<=9;i++)
    {
        printf("enter item name");
        gets (item[i]);
    }
    for (i=0;i<=9;i++)
    {
        printf("enter rate"); 
        scanf("%d",&rate[i]);     
    }
    l=rate[0];
    p=0;
    for (i=1;i<=9;i++)
    {
        if (rate[i]>l)
        { 
            l=rate[i];
            p=i;
        }
    }
    printf("most costliest %s",item [p]);
    printf("\ndate = %d",l); 
}