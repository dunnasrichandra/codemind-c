#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d",&x,&a,&b);
    y=a+2*b;
    if(x==y||y>x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}