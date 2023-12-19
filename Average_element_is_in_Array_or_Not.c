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
    int avg,sum=0;
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
        avg=(float)sum/a;
    }
    int ans=0;
    for(i=0;i<a;i++)
    if(arr[i]==avg)
    {
        ans=1;
        break;
    }
    if(ans==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}