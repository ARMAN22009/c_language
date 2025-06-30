#include<stdio.h>
int main(){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("enter array elements:");
        scanf("%d",&arr[i]);
    }
    int target;
    for (int i=1;i<n;i++){
        int j=i;
        while(arr[j]<arr[j-1]){
            
            target=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=target;
            j--;
        }

    }
for(int i=0;i<n;i++){
       
        printf("%d\n",arr[i]);
    }

    return 0; 
}