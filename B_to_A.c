#include<stdio.h>
int main()
{
    int b,a,i;
    scanf("%d%d",&a,&b);
    for(i=b;i>=a;i--)
    {
        printf("%d ",i);
    }
}