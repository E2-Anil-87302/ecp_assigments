#include<stdio.h>
int main()
{
  printf("*\n");
  printf("**\n");
  printf("***\n ");
  printf("****\n ");
  printf("******\n ");

  for(int i;i<=5;i++)
  {
	for(int j=1;j<=i;j++)
	{
	  printf("* ");
	}
	printf("\n");
  }
  return 0;
}
