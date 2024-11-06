/* print lowercase letters of corresponding number is from 1 to 9,for greater than 9 print if it is odd or even */ 





#include <stdio.h>
void main()
{
int n;
printf("enter number:");
scanf("%d",&n);
if (n>=1 && n<=9)
        {
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
        }
    }
    else
        {
            if (n%2==0)
            printf("even");
            else
            printf("odd");
        }

}
