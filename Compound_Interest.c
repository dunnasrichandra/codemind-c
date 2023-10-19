#include<stdio.h>
#include<math.h>
int main()
{
    float ci,pi,r,ti,A;
    scanf("%f%f%f",&pi,&r,&ti);
    A=pi*pow((1+r/100),ti);
    ci = A-pi;
    printf("%.2f",ci);
}