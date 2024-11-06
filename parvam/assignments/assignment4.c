/*determine the grades based on marks*/





#include <stdio.h>
void main()
{
    int score;
    printf("enter your marks out of 100: \n");
    scanf("%d",&score);

    if(score>=90)
        printf("grade A");
    else if (score<=89 && score>=80)
        printf("grade B");
    else if (score<=79 && score>=70)
        printf("grade C");
    else if (score<69 && score>=60)
        printf("grade D");
    else
        printf("grade F");

}
