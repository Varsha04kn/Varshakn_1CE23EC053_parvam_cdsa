/*pogram that converts a lowercase to uppercase letter and viceversa*/








#include <stdio.h>
void main()
{
    char ch=getc(stdin);
    if(ch>=65&&ch<=90)
        printf("lowercase character is %c",ch+32);
    else if(ch>=97&&ch<=122)
        printf("uppercase character is %c",ch-32);
    else
        printf("invalid input");

}
