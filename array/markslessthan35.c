#include<stdio.h>
int main (){
    int arr[4]={35,40,20,66};
    for (int i=0;i<4;i++){
        
        if(arr[i]<35){
           
            printf("%d\n%d",arr[i],i);
        }
    }
    return 0;
}