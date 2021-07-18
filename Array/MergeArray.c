#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[50], arr2[50], size1, size2, i, k, merge[100];
    printf("Enter first Array Size: \n");
    scanf("%d", &size1);
    printf("Enter first array Elements: \n");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter second Array  Size: \n");
    scanf("%d", &size2);
    printf("Enter second Array  Elements: \n");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++){
    	 printf("%d ", merge[i]);
	}

    printf("\nThe Reverse array after merging is:\n");
    for(i=k-1;i>=0;i--){
    	printf("%d ", merge[i]);
	}
	
    getch();
    return 0;
}
