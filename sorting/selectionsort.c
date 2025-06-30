#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    
    
    int arr[n],min;
printf("enter arr elements:");
for(int i=0;i<n;i++){
printf("arr[%d]:",i);
scanf("%d",&arr[i]);
}
min=arr[0];
for(int i=0;i<n;i++){
    for(int j=i;j<n-i;j++){
if(arr[i]<min){
    min=arr[i];
}
}
}
for(int i=0;i<n;i++){
    for(int j=i;j<n-i;j++){
int target=arr[0];
arr[0]=min;
min=target;
}
}

for(int i=0;i<n;i++){
printf("%d\n",arr[i]);}

//printf("%d",min);
    return 0;
}