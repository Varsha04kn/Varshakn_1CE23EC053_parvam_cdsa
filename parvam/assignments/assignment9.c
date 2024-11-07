/* sum of digits*/





#include <stdio.h>
void main()
{
    int n,r,sum=0;
    printf("enter any 5 digit number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digits : %d",sum);
}
