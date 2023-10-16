#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a+b;
    f=c+d;
    if(e<f)
    printf("%d",e);
    else
    printf("%d",f);
}