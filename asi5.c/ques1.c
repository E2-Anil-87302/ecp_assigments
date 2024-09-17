#include<stdio.h>
int main()
{
int i, arr[5];
float sum;
printf("Enter marks of 5 subjects.\n");
for(i=0;i<5;i++)
{
	scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
	sum = sum + arr[i];
}
printf("Result : %.2f\n",sum/5);
return 0;
}
