#include<stdio.h>
int main()
{
    int units;
    float c,sur=0,bill,tot;
    scanf("%d",&units);
    if(units<=199)
    c=1.20;
    else if (units>=200&&units<400)
    c=1.50;
    else if (units>=400&&units<600)
    c=1.80;
    else if (units>=600&&units<800)
    c=1.80;
    else
    c=2.00;
    bill=units*c;
    if(bill>400)
    sur=0.15*bill;
    else
    sur=100;
    tot=bill+sur;
    printf("%.2f",tot);
}