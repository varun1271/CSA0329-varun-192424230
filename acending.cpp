#include "stdio.h"
int main(){
	int arr[]={7,8,5,3,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while (j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	printf("sorted array:");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
