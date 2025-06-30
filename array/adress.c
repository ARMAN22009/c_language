#include<stdio.h>
int main(){
    int arr[3]={3,2,1};
    for (int i=0;i<3;i++){
        printf("\n%d\n%p",arr[i],&arr[i]);
    }
    return 0;
}