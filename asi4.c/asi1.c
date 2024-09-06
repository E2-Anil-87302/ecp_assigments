#include<stdio.h>
int fact();
int main()
{
  int num,factorial;
  printf("Enter a number to print its factorial.\n");
  scanf("%d",&num);
  factorial = fact(num);
  printf("The factorial is %d\n",factorial);
return 0;
}
int fact(int n)
{
  if(n>=1)
	return n* fact(n-1);
  else
	return 1;

}
