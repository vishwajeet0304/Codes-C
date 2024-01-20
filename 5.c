 #include <stdio.h>
int main ()
{
    char iname[50];
    int qty ; 
    float rate , value;
    printf("enter the item name");
    scanf("%s" , iname);
    printf("enter the quantity , rate");
    scanf("%d %f" , &qty , &rate);
    value = qty * rate ; 
    printf ("%s %d %f %f" , iname , qty , rate , value) ;
}
