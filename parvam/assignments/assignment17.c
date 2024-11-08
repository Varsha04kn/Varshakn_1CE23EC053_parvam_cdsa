/* Maximum sum of two distinct integers*/



#include <stdio.h>
#include<limits.h>
int max_sum(int arr[], int n) {
    int max1 = arr[0], max2 = INT_MIN, i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }
    if (max2 == INT_MIN) {
        printf("Array must have at least two distinct integers.\n");
        return -1;
    }

    return max1 + max2;
}
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = max_sum(arr, n);
    if (result != -1)
        printf("Maximum sum of two distinct integers: %d\n", result);
}
