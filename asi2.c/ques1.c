#include<stdio.h>
int main()
{
  int num1,num2;
  float res;
  printf("Enter two number.\n");
  scanf("%d%d",&num1,&num2);
  if(num2 == 0)
	printf("Dont enter 0 please enter a valid a integer.%f: ",res);
 
 else
  {
	res =(float)num1/num2;
	printf("Result = %.2f",res);
  }
  return 0;
}

