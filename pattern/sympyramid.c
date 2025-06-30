#include<stdio.h>
int main(){
    int r;
    printf("enter rows:");
    scanf("%d",&r);
    for (int i=1;i<=r;i++){
        int a=1;
        int b=i-1;
        for (int j=1;j<=r-i;j++){
            printf("  ");
            
        }
        for (int k=1;k<=i;k++){
            printf("%d ",a);
            a++;
        }
        for (int f=1;f<=i-1;f++){
            printf("%d ",b);
            b--;
        }
        printf("\n");   
     }
    return 0;
}