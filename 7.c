// calculate a volume of cylinder
#include<stdio.h>
int main()
{
    const float pie = 3.124;
    float radius;
    float height;
    float volume;
    printf("enter the radius and height of a cylinder");
    scanf("%f %f" , &radius , &height );
    volume = pie * radius * radius * height;
    printf(" volume of a cylinder is %f " , volume);
}