#include<stdio.h>
int main(){
	int a[20],b[20],sum[20],n,i,j,k;
	printf("Enter no. of elements store in a single array: ");
	scanf("%d",&n);
	printf("Enter %d element of first array : ",n);
	for(i=0;i<n;i++){
		scanf("\t%d",&a[i]);
	}
	printf("Enter %d element of second array : ",n);
	for(j=0;j<n;j++){
		scanf("\t%d",&b[j]);
	}
	printf("Total sum : ");
	for(k=0;k<n;k++){
		sum[k] = a[k] + b[k];
		printf("\t%d",sum[k]);
	}
	return 0;
}
