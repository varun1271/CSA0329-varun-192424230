#include "stdio.h"
int main(){
	int i=0,j=1,nt,sum=-3;
	int n;printf("enter a number");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d",i+1);
		sum=sum+i;
		nt=i+j;
		j+nt;
	}
	printf("the sum of fibonacci series is%d",sum);
	
}
