#include<stdio.h>
int main() {
    int n,i;
    printf("enter n");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
    printf("enter arr[%d]",i);
    scanf("%d",&arr[i]);
    }
for(int f=0;f<n-1;f++){
    for(int j=0;j<n-f-1;j++){
     
        if(arr[j]>arr[j+1]) {
            int tart;
            tart=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=tart ;
        }
        
      
    }
}
    for(int i=0;i<n;i++){
        printf("sorted arr[%d]",i);
        printf("%d",arr[i]);
        printf("\n");    
    }
    return 0;
}