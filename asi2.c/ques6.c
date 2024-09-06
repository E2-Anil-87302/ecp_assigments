#include<stdio.h>
int main()
{
  int temp1,rev,num,reminder,temp,flag=0;
  label:
  printf("Enter a five digit number.\n");
  scanf("%d",&num);
  temp = num;
  temp1=num;
  while(num!=0)
  {
	num=num/10;
	flag++;
  }
  if(flag==5)
  {

	while(temp1!=0)
	{
	  reminder = temp1%10;
	  rev = rev*10+reminder;
	  temp1 = temp1/10;
	}
	if(temp == rev)
	{
	  printf("The number is a palidrome: %d\n",temp);
	}
	else
	{
	  printf("The number is not a palindrome: %d\n",temp);
	}
  }
  else
  printf("You haven't entered a five digit number.\n");
 return 0;
}
