#include<stdio.h>
int main()
{
  int num1;
  printf("Enter a number. ");
  scanf("%d",&num1);
  if(num1==0)
  {
	printf("You have enterd 0\n");
  }
  else if(num1>0)
  {
	printf("You have entered a positive number. \n");
  }
  else
  {
	printf("You have enetered a nagative number. \n");
  }
  return 0;
}
