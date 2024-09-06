#include<stdio.h>
void add(int num1,int num2);
void sub();
void div();
void multi();
int main()
{
  int num1,num2;
  char op;

  printf("Enter two numbers.\n");
  scanf("%d%d",&num1,&num2);
  printf("which opeartion you wanna perform.\n");
  scanf("%*c%c",&op);

  switch(op)
  {
	case '+': add(num1,num2);
			  break;
	case '-': sub(num1,num2);
			  break;
	case '*':multi(num1,num2);
			 break;
	case '/':div(num1,num2);
			 break;
  }
  return 0;
}
void add (int num1, int num2)
{
  printf("ADDDITION = %d\n",num1+num2);
}
void sub(int num1,int num2)
{
  printf("SUBTRACTION = %d\n",num1-num2);
}
void div(int num1,int num2)
{
  if (num1== 0)
	printf("Enter a valid input.\n");
  printf("DIVISION = %.2f\n",(float)num1/num2);
}
void multi(int num1,int num2)
{
  printf("MULTIPICAION = %d\n",num1*num2);
}










