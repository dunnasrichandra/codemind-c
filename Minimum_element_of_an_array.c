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
    int min=array[0];
    for(i=0;i<a;i++)
    {
      if(min>array[i])
      min=array[i];
    }
    printf("%d",min);
}