#include<stdio.h>
void hexa(int n)
{
printf("The heaxadecimal is %x",n);
}
int main()
{
int num;
printf("Enter a number.\n");
scanf("%d",&num);
hexa(num);
return 0;
}
