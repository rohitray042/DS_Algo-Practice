#include<stdio.h>
#include<stdlib.h>

void reversedArray(int arr[] ,int i){
	for(i=0;i>arr.length;i++){
		printf("%d",arr[i]);
	}
}
int main(){
	int a[] = {1,2,3,4};
	int i=0;
	
	reversedArray(a,i);

}
