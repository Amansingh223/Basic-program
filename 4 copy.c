#include<stdio.h>
int main ()
{
    int x;
    printf("enter the number ");
    scanf("%d",&x);
    if(x/2&2==x)
    {
        printf("even");

    }
    else 
    {
        printf("odd");
        
    }
    return 0;
}