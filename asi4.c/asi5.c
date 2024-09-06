#include<stdio.h>
void fun();
int main ()
{
  char ch;
  int num;
  printf("Enter the character.\n");
  scanf("%c",&ch);
  fun(ch, num);
  return 0;
}
void fun(char c,int n1)
{
  for(int i= 1;i<=n1;i++)
  {
	printf("%c",c);
  }
}
