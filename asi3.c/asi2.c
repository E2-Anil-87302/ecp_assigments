#include<stdio.h>
int main()
{
int num,i=1;
printf("Enter a number you wanna print table of.\n");
scanf("%d",&num);
while( i<=10)
{
printf("%d * %d =%d\n",num,i,num*i);
i++;
}
printf("Thankyou.\n");
return 0;
}
