// structure 
#include<stdio.h>
struct stock
{
    char iname[20];
    int qty;
    float rate,value;
};
int main()
{
    struct stock s,s1; 
    printf("enter the name , qty , rate");
    scanf("%s %d %f",&s.iname,&s.qty,&s.rate);
    s.value= s.rate * s.qty;
    printf("%s %d %f %f",s.iname,s.qty,s.rate,s.value);
    s1=s;
    printf("\n %s %d %f %f",s1.iname,s1.qty,s1.rate,s1.value);
}                                                                       