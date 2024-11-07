/* bank loan eligibility
*/



#include<stdio.h>
void main()
{
    int age,income;
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your monthly income : ");
    scanf("%d",&income);
    if(18<=age && age<=60)
    {
        if(18<=age && age<=25)
        {
            if(income>=5000 && income<=50000 )
                printf("Eligible");
            else
                printf("Not eligible");
        }
        if(25<age && age<=40)
        {
            if(income>=10000  && income<=50000)
                printf("Eligible");
            else
                printf("Not eligible");
        }
        if(age>40)
        {
            if(income>=15000  && income<=50000)
                printf("Eligible");
            else
                printf("Not eligible");
        }
    }
    else
        printf("Not eligible");
}
