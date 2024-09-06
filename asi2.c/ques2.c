#include<stdio.h>
int main()
{
  int num1,num2;
  float res;
  label:
  printf("Enter a number two number ");
  scanf("%d%d",&num1,&num2);
  if(num2 == 0)
  {
	printf("Please enter a valid input\n");
	goto label;
  }
  else if(num1%num2 == 0)
  {
	printf("The integer is even\n");
  }
  else
  {
	printf("The number is odd\n");
  }
	return 0;
}
