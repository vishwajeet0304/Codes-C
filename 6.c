#include <stdio.h>
int main()
{
    char name [100];
    char class1[20];
    char rollno [15];
    int phy ; 
    int chem;
    int maths;
    float total ;
    float percentage;
    printf("enter your name");
    scanf("%f" , name );
    printf("enter your class");
    gets(class1);
    printf("%f" , rollno);
    gets (rollno);
    printf("enter your physics marks");
    scanf("%d" , &phy);
    printf("enter your chem marks");
    scanf("%d" , &chem);
    printf("enter your maths marks");
    scanf("%d" , &maths);
    total = chem + phy + maths;
    percentage = total*100/300;
    printf(" %f %f" , total , percentage); 

}