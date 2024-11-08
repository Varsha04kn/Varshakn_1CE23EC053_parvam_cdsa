/* Search of an element in an array*/



#include <stdio.h>
void main()
{
    int arr[100000],size,i,ele,flag=0;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("\nEnter the elements of array : ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the element to search : \n");
    scanf("%d",&ele);
    for(i=0;i<size;i++)
        if (ele==arr[i])
        {
            flag=1;
            break;
        }
     if(flag==1)
        printf("Yes,element is found");
     else
        printf("No,element is not found");
}
