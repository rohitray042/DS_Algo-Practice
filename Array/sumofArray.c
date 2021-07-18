#include<stdio.h>
int main(){
	int n, a[10],i,j,sum=0;
	printf("\nEnter limit of Array:\n");
	scanf("%d",&n);
	printf("\nEnter elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	
	}
	for(j =0;j<n;j++){
		sum += a[j];
	
	}
		printf("\nArray Sums  are : %d",sum);
		
}
