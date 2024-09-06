#include<stdio.h>
int main()
{
  int num1,rev=0,temp;
  short int a,b,c,d;
  printf("Enter a four digit number.\n");
  scanf("%d",&num1);
  temp=num1;
  while(num1!=0)
  {
	a=num1%10;
	num1/=10;
	b=num1%10;
	num1/=10;
	c=num1%10;
	num1/=10;
	d=num1%10;
	num1/=10;
  }
  printf("The face value of each digit is. %hd %hd %hd %hd\n",a,b,c,d);
  printf("The place value of each digit is \n%hd %d %d %d\n",a,b*10,c*100,d*1000);
  a=0;
  num1=temp;
  while(num1!=0)
  {
	a=num1%10;
	rev=rev*10+a;
	num1/=10;
  }
  printf("Reverse of the number is %d\n",rev);
  return 0;
}
