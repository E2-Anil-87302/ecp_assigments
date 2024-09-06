#include<stdio.h>
int main()
{
  int num1;
  printf("Enter a number to print its factorial.\n");
  scanf("%d",&num1);
  for(int i = 1;num1>i;i++)
  {

	if(num1%i==0)
	  printf("%d,",i);
  }
  return 0;
}
