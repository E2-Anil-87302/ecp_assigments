//section 2 question 2 calculator using switch case 
#include <stdio.h>
int main()
{
    int num1, num2, choice;
    printf(" Enter choice  \n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division ");
    scanf("%d", &choice);
    printf("Enter two numbers ");
    scanf("%d%d", &num1, &num2);
    switch(choice)
    {
        case 1:
       printf(" The addition is %d\n",num1+num2);
       break;
       
       case 2:
       printf("The subtraction is  %d\n",num1-num2);
       break;

       case 3:
       printf("The multiplication is %d\n",num1*num2);
       break;

       case 4:
       printf("The division is %d\n",num1/num2);
       break;
        
    }

    return 0;
}
