/*print character then sting and then a sentence*/




#include <stdio.h>
void main()
{
    char  ch,s[100],sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    getchar();
    scanf("%[^\n]%*c",&sen);
    printf("\n%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);

}
