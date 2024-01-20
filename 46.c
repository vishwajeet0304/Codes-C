// using structure and adding dob
#include<stdio.h>
struct student{
    char name[50];
    char class[20];
    int rollno;
    struct DOB
    {
        int dd , mm , yy;
    }d;
    float marks1,marks2,marks3,total,average; 
};  
    int main()
    {
        struct student s;
        printf("enter name , class , roll no");
        scanf("%s %s %d", &s.name,&s.class,&s.rollno);
        printf("enter date,month and year");
        scanf("%d %d %d",&s.d.dd,&s.d.mm,&s.d.yy);
        printf("enter marks1 , marks 2 , marks 3");
        scanf("%f %f %f",&s.marks1,&s.marks2,&s.marks3);
        s.total= s.marks1+s.marks2+s.marks3;
        s.average=s.total/3;
        printf("%s %s %d %d %d %d %f %f %f %f %f",s.name ,s.class ,s.rollno ,s.d.dd, s.d.mm , s.d.yy, s.marks1, s.marks2, s.marks3, s.total, s.average);

    } 