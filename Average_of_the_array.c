#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    float  sum=0,avg;
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
    }
    avg=(float) sum/a;
        printf("%.2f",avg);
}