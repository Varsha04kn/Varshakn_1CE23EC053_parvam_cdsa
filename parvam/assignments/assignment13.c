/*reverse array using pointers*/






#include <stdio.h>
int main()
{
    int size,i,arr[100],*ptr;
    ptr=&arr[0];
    printf("enter the size of an array : ");
    scanf("%d",&size);
    printf("\nenter the elements of an array: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("\nthe elements of an array in reverse order is: \n ");
    ptr=&arr[size-1];
    for (i=0;i<size;i++)
       {
        printf("%d\t",*ptr);
        *ptr--;
       }

    return 0;
}
