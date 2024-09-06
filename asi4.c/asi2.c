#include<stdio.h>
int multi();
int main()
{
  int res,num,pow;
  printf("Enter a number and then enter its power.\n");
  scanf("%d%d",&num,&pow);
  res = multi(num,pow);
  printf("The value is %d\n",res);
  return 0;
}
int multi(int n ,int p)
{
int m = 1;
  for(int i=1;i<=p;i++)
  {
	m=m*n;
  }
  return m;
}

