#include<stdio.h>
int main(){
	int a[20],n,max,i;
	max = 0;
	printf("\nEnter limits of array: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max = a[i];
		}
	}
	printf("\nLagrest is %d",max);
}
