#include<stdio.h>
int main()
{
/*
int num1,num2;
printf("Enter two numbers.\n");
scanf("%d%d",&num1,&num2);
if(num1<num2)
printf("num2 is greater.\n");
else
printf("num1 is greater.\n");
*/
int num1,num2;
printf("Enter two number .\n");
scanf("%d%d",&num1,&num2);
(num1<num2)?printf("The second number is greatest.\n"):printf("The first number is greatest.\n");
return 0;
}
