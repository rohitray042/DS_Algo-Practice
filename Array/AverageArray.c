#include<stdio.h>
int main(){
	int n,a[10]= {1,2,3,4,5,10};
	int i,sum=0;
	float avg;
	printf("Enter number of elements: \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		
		sum += a[i];
		
	}
	printf("\nSum of array is %d ",sum);
	avg = (float)sum/n;
	printf("\nAverage of array values is %.2f", avg);  
}
