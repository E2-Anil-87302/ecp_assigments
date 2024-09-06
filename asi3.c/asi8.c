#include<stdio.h>
int main()
{
  int num;
  printf(" Enter a number to print its factors");
  scanf("%d",&num);
  while(num%2==0)
  {
	printf(" %d ",2);
	num /= 2; 
  }
  for(int i=3;i<=num;i++)
  {
	while(num%i==0)
	{
	printf(" %d ",i);
	num=num/i;
	}
  }
  return 0;
}
