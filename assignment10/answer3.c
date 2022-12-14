#include<stdio.h>
 int num(int x);
int main()
{
    int x,a=0;
    printf("enter a number");
    scanf("%d",&x);
    a = num(x);
    if(a == 1)
     printf("evennumber");
     else
     printf("odd number");
    return 0;
}
 int num (int x)
{
    
    
    return x%2 ==0;
}