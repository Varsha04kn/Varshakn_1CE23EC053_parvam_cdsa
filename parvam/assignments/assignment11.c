/* addition and mod subtraction using pointers*/





#include<stdio.h>
#include<stdlib.h>
void update(int *a, int *b)
{
    int sum,diff;
    sum=*a+*b;
    diff=abs(*a-*b);
    *a=sum;
    *b=diff;
}
int main()
{
    int a,b;
    int *ptra= &a,*ptrb= &b;
    scanf("%d %d",&a,&b);
    update(ptra,ptrb);
    printf("\n%d\n%d",a,b);
    return 0;
}
