#include <stdio.h>
struct stock {
    char name[10][50];
    int qty [10];
    float rate[10],value[10];
};         
int main()
{  int i;
struct stock s;
for (i=0;i<=3 ;i++)   
{
    printf("enter name,qty,rate");
    scanf("%s %d %f",&s.name[i],&s.qty[i],&s.rate[i]);
    s.value[i]=s.rate[i]*s.qty[i];
    printf("%s %d %f %f",s.name[i],s.qty[i],s.rate[i],s.value[i]);
};  
}             