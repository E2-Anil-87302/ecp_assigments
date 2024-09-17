#include<stdio.h>
void print_fib();
int main()
{
  int num;
  printf("Enter the number of elements.\n");
  scanf("%d",&num);
  printf("%d %d ",0,1);
  print_fib(num-2);
  return 0;
}
void print_fib(int n)
{
  static int n1=0,n2=1,n3;
  if(n>0)
  {
	n3 = n1 +n2;
	n1=n2;
	n2=n3;
	printf("%d ",n3);
     print_fib(n-1);
  }
}
