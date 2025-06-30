#include<stdio.h>
int main() {
    int i,j,target=5,n;
   
    printf("enter n");
    scanf("%d",&n);
    int arr[n];
    for (int k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    for(i=0,j=n-1;i<j;){
    if(arr[i]+arr[j] == target){
        printf("found");
    break;
    }
    else if (arr[i]+arr[j] < target)  {
          i++; }
    else  {
                j-- ;}
            }
    return 0;
}