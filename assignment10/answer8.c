#include<stdio.h>
int fact(int n)
{
   int i,f=1;
   for(i=1;i<=n;i++)
     
       f=f*i;
       return f;
}

int perm(int n ,int r)
{
    return fact(n)/fact(n-r);

}
int main()
{
    printf("permutation =%d\n\n",perm(10,2));
}