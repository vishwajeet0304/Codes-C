#include<stdio.h>
union row {
    int i,k;
};
union coloum
{
    int j,l;
    
};
int main()
{
    union row r;
    union coloum c;
    int n[4][4];
    for (r.i=0;r.i<=3;r.i++)
    {
        for (c.j=0;c.j<=3;c.j++)
        {
            printf("enter no");
            scanf("%d",&n[r.i]);
        }
    }
    for (r.k=0;r.k<=3;r.k++)
    { 
        for (c.j=0;c.j<=3;c.j++) ;
    }
}