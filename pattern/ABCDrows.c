#include<stdio.h>
int main() {
    int n,y;
    printf("enter no of rows: ");
    scanf("%d",&n);
        for (int i=1;i<=n;i++){
            int x=1;
            for(int j=1;j<=n;j++){
               
                y=x+64;
                printf("%c ",y);
                x++;

            }
            printf("\n");
        }
        return 0;
}