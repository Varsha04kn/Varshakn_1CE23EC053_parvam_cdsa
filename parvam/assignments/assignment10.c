/*print if given number is prime or not*/




#include <stdio.h>
void main()
{
    int num,count=2,a=1;
    printf("enter a number\n");
    scanf("%d",&num);
    while(count<num)
    {
        if(num%count==0)
        {
            a=0;
            break;
        }
        count++;
    }
    if(a)
        printf("yes, prime number");
    else
        printf("no, not prime number");
}
