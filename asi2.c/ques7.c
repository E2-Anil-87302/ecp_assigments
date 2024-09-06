#include<stdio.h>
int main()
{
    
    int num;
    printf("Enter year number");
    scanf("%d",&num);
    if(num % 4 == 0)
    {
        if (num % 100!=0)
        {
             printf("It is a leap year\n");  
        }
        else if (num % 400== 0)
        {
            printf("it is a leap year\n");
        }
        
         else{
            printf(" it is not a leap year\n");
         }  
         
    }
    else{
        printf("it is not a leap year\n");
    }
	/*
    int num;
    printf("Enter the year number ");
    scanf("%d",&num);
	*/
    return 0;
}
