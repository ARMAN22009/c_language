#include<stdio.h>
int factorial (int x){
    int fact =1;
    for (int i=1;i<=x;i++){
   
    fact=fact*i;
    }
    return fact ;
}

int main(){
    int ncr,n,r;
    printf("enter n and r:");
    scanf("\n%d %d",&n,&r);
    int a=factorial(n);
    
    int b=factorial(r);
    
    int c=factorial(n-r);
    
     ncr=a/(b*c);
    printf("%d",ncr);

    // int nfact=1;
    // int rfact=1;
    // int nmrfact=1;
    
    // for(int i=1;i<=n;i++){
    //     nfact=nfact*i;

    // }
    // for(int i=1;i<=r;i++){
    //     rfact=rfact*i;
        
    // }
    // for(int i=1;i<=n-r;i++){
    //     nmrfact=nmrfact*i;
        
    // }
    // ncr=nfact/(rfact*nmrfact);
    // printf("value is:%d",ncr);
    return 0;
}