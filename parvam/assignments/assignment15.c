/* reverse of given array*/



#include <stdio.h>
void main()
{
    int size,arr[1000],i;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter the elements of array :");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("\nElements in reverse order: ");
    for(i=size-1;i>=0;i--)
        printf("%d\t",arr[i]);


        }
