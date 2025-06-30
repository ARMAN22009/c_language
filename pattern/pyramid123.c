#include<stdio.h>
int main(){
    int r;
    printf ("enter rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for (int j=1;j<=r-i;j++){
            printf("  ");
         }
         int a=1;
         for(int k=1;k<=2*i-1;k++){
            printf("%d ",a);
            a++;
         }
        printf("\n");
    }
    return 0;
}