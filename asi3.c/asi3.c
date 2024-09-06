
#include<stdio.h>
int main()
{
  /*calculate sum of digit
	int num,sum=0,r;
	printf("Enter a number.\n");
	scanf("%d",&num);
	while(num!=0)
	{
	r = num%10;
	sum +=r;
	num /= 10;
	}
	printf("sum = %d\n",sum);
   */
  int num,rev=0,rem,temp;
  printf("Enter a number you wanna reverse.\n");
  scanf("%d",&num);
  temp=num;
  while(num!=0)
  {
	rem = num % 10;
	rev = rev*10+rem;
	num /= 10;
  }
  printf("The reversed number is %d.\n",rev);
	

  if(rev==temp)
  printf("The number is a palindrome %d\n",rev);
  else
  printf("The number is not a palindrome.\n");

  return 0;
}

















