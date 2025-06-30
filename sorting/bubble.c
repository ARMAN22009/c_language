#include<stdio.h>
int main(){

    int n;
    printf("enter  number :");
    scanf("%d",&n); 
    int arr[n];
     
    for(int i=0;i<n;i++){
        printf(" enter elements of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for (int f=0;f<n-1;f++){
        for(int j=0;j<n-f-1;j++){
        int tarr;
    if(arr[j]>arr[j+1]){
        tarr=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=tarr;
    }
}
}
    printf(" sorted elements ");
for(int i=0;i<n;i++){
        
        printf("%d\n",arr[i]);
    }
    return 0;
}