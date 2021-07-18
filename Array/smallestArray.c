#include<stdio.h>
int main(){
	int n,a[20],i,smallest;
	smallest = a[0];
	printf("\nEnter Elements of Array: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i] < smallest){
			smallest = a[i];
		}
	}
	printf("\nSmallest element is %d ",smallest);
}
