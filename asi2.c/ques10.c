#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character ");
    scanf("%c",&c);
    if (c >= 60 && c <=90 || c >= 97 &&  c <=122)
    {
        printf("%c is a alphabet\n",c);
        if(c >= 60 && c <= 90)
        {
            printf(" it is a upper case letter and asci vlaue is %d\n",c);
        }
        else
        {
            printf("it  is a lowercase letter and its asci vlaue is %d\n",c);
        }
    }
	if(c > 48 && c<57)
	{
			printf("It is a digit and its asci value is %d\n",c);
	}
	else if(c==32)
			printf("It is a space and its asci value is %d\n",c);
	else if(c==9)
			printf("you have entered a tab and its asci value is %d\n",c);
	else
			printf("Not listed to us.\n");
    return 0;
}
