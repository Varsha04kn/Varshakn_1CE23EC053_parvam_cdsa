/*print the lowercase english word corresonding to number*/




#include <stdio.h>
void main()
{
int n;
printf("enter any number between 1 to 9:");
scanf("%d",&n);

    switch(n)
    {
        case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break;
         case 3:
        printf("three");
        break;
        case 4:
        printf("four");
        break;
        case 5:
        printf("five");
        break;
        case 6:
        printf("six");
        break;
        case 7:
        printf("seven");
        break;
        case 8:
        printf("eight");
        break;
        case 9:
        printf("nine");
        break;
        default:
        printf("enter between 1 to 9");
    }
}
