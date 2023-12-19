#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int a,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    printf("%d",sum);
}