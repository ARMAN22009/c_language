
#include<stdio.h>
int main(){
	int n;
	printf("Enter no of elements of array : ");
	scanf("%d", &n);
	if(n<=0){
		printf("Invalid Input\n");
		
	}
	int arr[n];
	for(int i=0; i<=n; i++){
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	int minindex = 0;
	int maxindex = 0;
	for(int i = 0; i<n; i++){
		if(max<arr[i]){
			max = arr[i];
			maxindex = i;
		}
		if(min>arr[i]){
			min = arr[i];
			minindex = i;
		}
	}
	printf("The max number in this array is %d and its index is %d\n", max, maxindex);
	printf("The min number in this array is %d and its index is %d", min, minindex);
	return 0;
}