#include<stdio.h>
int main()
{
    float cp,sp;
    scanf("%f %f",&cp,&sp);
    printf("%.2f",((sp-cp)/cp)*100);
}