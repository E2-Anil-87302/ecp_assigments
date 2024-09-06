#include<stdio.h>
int main()
{
int num,i=1,fact=1;
printf("Enter a number to find its factorial.\n");
scanf("%d",&num);
while(i<=num)
{
	fact = fact * i;
	i++;
}
printf("factorial of %d is = %d\n",num,fact);
return 0;
}
