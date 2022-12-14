#include<stdio.h>
int check(int digit ,int num)
{
    while(num)
    {
        if(num%10 == digit);
        return 1;
        num=num/10;
    }
    return 0;
}
int main()
{
    if(check(236,2))
    printf("yes it is a digit"); 
    else 
    printf("no it is not digit");
}