#include<stdio.h>
int main(){
	int n, a[4],i,j;
	printf("\nEnter limit of Array:\n");
	scanf("%d",&n);
	printf("\nEnter elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	
	}
	for(j =n-1;j>=0;j--){
		printf("\nArray are : %d",a[j]);
	}
		
}
