#include<stdio.h>
int main(){
    int n,x;
    printf("enter n,x");
    scanf("%d%d",&n,&x);
    float sum=1.0;
    float fact=1.0;
     float t=1.0;
    for (int i=1;i<=n;i++){
        
        t=i*x/fact;
        fact=fact*i;
        sum=sum+t;
    }
printf("\n%d\n%d\n%f",n,x,sum);
    return 0;
}