#include<stdio.h>
int main(){
    int n;
    printf("enter no of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if (i%2==0){
            int x=1;
            for(int j=1;j<=i;j++){
                
                int d=x+64;
                printf("%c",d);
                x++;
            }
        }
        else{
            for(int j=1;j<=i;j++){
                printf("%d",j);
            }
        }
        printf("\n");
    }
    
    return 0;

}