#include<stdio.h>
#include<math.h>
int count (int n) {
    int county=0;
    while(n>0) {
        
        county++;
        n/=10;
    }
    return county;
}
int main() {
    int x;
    scanf("%d",&x);
    int n1=x%10;
    int c=count(x);
    int n2=x/pow(10,(c-1));
    printf("%d",n1+n2);
}