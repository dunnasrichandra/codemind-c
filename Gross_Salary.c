#include<stdio.h>
int main()
{
   float bs,da,hra,gs;
   scanf("%f",&bs);
   if(bs<=10000)
 {
     da=(0.8)*bs;
     hra=(0.2)*bs;
     gs=bs+da+hra;
     printf("%.2f",gs);
 }
 else if(bs<=20000)
 {
     da=(0.9)*bs;
     hra=(0.25)*bs;
     gs=bs+da+hra;
     printf("%.2f",gs);
 }
 else if(bs>20000)
 {
     da=(0.95)*bs;
     hra=(0.3)*bs;
     gs=bs+da+hra;
     printf("%.2f",gs);
 }
}