#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum1=0,sum2=0;
    for (int j=0;j<n;j++)
    {
        if(arr[j]%2==0) 
        {
            sum1+=arr[j];
        }
    }
    for(int k=0;k<n;k++)
    {
        if(arr[k]%2==1)
        {
            sum2+=arr[k];
        }
    }
    int x=abs(sum1-sum2);
    printf("%d",x);
    
}