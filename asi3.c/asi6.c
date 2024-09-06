#include<stdio.h>
int main()
{
  int num,i=1;
  printf("Enter a number to print its factors.\n");
  scanf("%d",&num);
  while(num/2>=i)
  {
	if(num%i==0)
	{
	  printf("%d\n",i);
	}
	i++;
  }
  return 0;
}
