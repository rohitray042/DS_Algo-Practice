
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *arr  ,n,sum =0,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    arr = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter Array index of %d value: ",i);
        scanf("%d",arr+i);
    }
    for(i = 0;i<n;i++){
        sum+=*(arr+i);
        
    }
    printf("\nSum of array elements is %d ",sum);
   free(arr);
    

    return 0;
}
