#include <stdio.h>
int main ()
{
    const float pie = 3.124;
    float radius = 10.5;
    int height = 5;
    float area = pie * radius * radius * height ;
    printf("%f\n %f\n %d\n %f\n" , pie , radius , height , area) ;
}