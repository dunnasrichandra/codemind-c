#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int array[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
    }
    int sum=0;
    for(i=0;i<a;i++)
    {
        if(array[i]%2!=0)
        sum+=array[i];
    }
    printf("%d",sum);
}