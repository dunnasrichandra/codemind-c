#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f%f%f",&a,&b,&c);
    d=(12/100.0)*a;
    e=a+b+c+d;
    printf("%.2f
%.2f",d,e);
}