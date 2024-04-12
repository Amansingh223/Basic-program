#include<stdio.h>
int main ()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x>15&&x<100)
    {
       x=x+5;
    }
    else
    {
        x=x+6;

    }
    printf("%d");
    return 0;
}