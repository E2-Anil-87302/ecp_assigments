#include<stdio.h>
int fact();
int main()
{
int num;
printf("Enter a number to print its factorial.\n");
scanf("%d",&num);
int num1 = fact(num);
printf("factorial : %d",num1);
return 0;
}
int fact(int n)
{
if(n == 0)
return 1;
else
return (n* fact(n-1));
}
