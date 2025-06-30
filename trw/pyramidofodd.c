#include<stdio.h>
int main(){
    int r,num;
    printf("enter no of rows");
    scanf("%d",&r);
    for (int i=1;i<=r;i=i+1){
        num =1;
        for(int j=1;j<=r-i;j++){
            printf("  ");
        }
        for(int j=1;j<=2*i-1;j++){
            int x=num+64;
            printf("%c ",x);
            num+=1;
        
        }
        printf("\n");
    }
    return 0;
}