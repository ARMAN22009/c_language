
#include<stdio.h>
int main(){
	int n;
	printf("Enter the no of elements of array : ");
	scanf("%d",&n);
	if(n<=0){
		printf("Invalid Input\n");
		return 1;
	}
	printf("Enter the elements of array : ");
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("After sorting the array in ascending order is \n");
	for(int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}	
    return 0;
}