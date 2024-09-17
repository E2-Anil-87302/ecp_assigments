#include<stdio.h>
int result();
int main()
{
  int num,num1;
  printf("Enter two number to find its greatest comman factor.\n");
  scanf("%d%d",&num,&num1);
  int res=result(num,num1);
  printf("%d\n",res);
  return 0;
}
int result(int num,int num1)
{
  if(num1!=0)
	return result(num1,num%num1);
  else
  return num;
}
