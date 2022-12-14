#include<stdio.h>
 void num(int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    num(n);
}
 void num(int n)
{
    int i;
    for(i=1;i<=n;i++)
   
    printf("%d ",i);
}