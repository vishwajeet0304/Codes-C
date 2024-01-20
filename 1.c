#include <stdio.h>
int main ()
{
    char name [4] = " ram" ;
    char class[6] = "10 th" ; 
    int phy = 100 ;
    int bio = 95 ;
    int chem = 95 ;
    int maths = 100 ; 
    int total = phy + bio + chem + bio ;
    float percentage = total * 100 / 400;
    printf ("%s %d %s  %d %d %d %d %f" , name , phy , class , bio , chem , maths , total , percentage );
}