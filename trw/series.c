#include<stdio.h>
int main(){
    int n,x,t;
    printf("enter n,x");
    scanf("%d%d",&n,&x);
    float sum=1.0;
    float fact=1.0;
     t=1;
    for (int i=1;i<=n;i++){
        
        t=t*x;
        fact=fact*i;
        sum=sum+t/fact;
    }
printf("\n%d\n%d\n%f",n,x,sum);
    return 0;
}