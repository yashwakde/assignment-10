#include<stdio.h>
 void prime(int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    prime(n);
}
 void prime(int n)
{
    int i;
    for(i=2;i<=n;i++)
   {
    while(n%i == 0)
   { 
    printf("%d ",i);
     n=n/i;
   } 
}
}
