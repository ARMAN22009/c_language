#include<stdio.h>
int main(){
    int n,j;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            for( j=1;j<=n;j++){
                if(i==j || j+i==n+1) {
                    printf("* ");
                }
                else{printf("  ");

         
                }
               
             }
        
        
        printf("\n");
        }
       
        return 0;
}