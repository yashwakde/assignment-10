#include<stdio.h>
int fact(int x);
int main()
{
    int n,a;
    printf("enter a number");
    scanf("%d",&n);
     fact(n);
     printf("factorial is  %d is %d",n,fact(n));
    return 0;
}
int fact(int n)
{
   int i,f=1;
   for(i=1;i<=n;i++)
     
       f=f*i;
       return f;
     
    
  
}