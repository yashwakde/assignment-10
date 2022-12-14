#include<stdio.h>
float area(int x);
int main()
{
    float a,r;
    printf("enter a radius");
    scanf("%f",&r);
    a = area(r);
     printf("area of circle is %f",a);
    return 0;
}
float area (int r)
{
    
    return 3.14*r*r;
}