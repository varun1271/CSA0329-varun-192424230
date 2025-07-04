#include <stdio.h>
int main (){
	int a[100],n;
	int max,min;
	printf("The size of array is \n");
	scanf("%d",&n);
	printf("\nEntering the  elements  of array is \n");
    for (int i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	printf("\nprinting the  elements  of array  \n");
	for (int i=0;i<n;i++){
    	printf("%d  ",a[i]);
	}
	
	max=a[0];
	min=a[0];
	
	for (int i=0;i<n;i++){
		if (a[i]>max){
			max=a[i];
		}
	}
	for (int i=0;i<n;i++){
		if (a[i]<min){
			min=a[i];
		}
	}	
	printf("\nThe maximum element in the array is %d\n",max);
	printf("\nThe minimum element in the array is %d\n",min);	
	
}
