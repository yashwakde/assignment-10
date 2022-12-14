#include<stdio.h>
float interest(float p, float r, float t);
int main()
{
    float p,r,t,a;
    printf("enter a principle,rate,time");
    scanf("%f%f%f",&p,&r,&t);
    a = interest(p,r,t);
     printf("interest is %.2f",a);
    return 0;
}
float interest (float p,float r,float t)
{
    
    return (p*r*t)/100;
}