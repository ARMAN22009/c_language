#include<stdio.h>
int main(){
    int arr[5]={33,27,111,1,11};
    int max=-1;
    for (int i=0;i<=4;i++){
        if (max<arr[i]){
            max=arr[i];
        }
        
    }
    printf("%d is max ",max);
    return 0;
}