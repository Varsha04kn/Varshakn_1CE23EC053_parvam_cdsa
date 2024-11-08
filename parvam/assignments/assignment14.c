/*sum of integers in array*/




#include <stdio.h>
void main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int*array;
    printf("\nprint the integers to add:");
    array=malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
        scanf("%d",(array+i));
    printf("\n");
    int sum=0;
    for(int i=0;i<size;i++)
        sum=sum+array[i];
    printf("\nsum of integers :%d",sum);
}
