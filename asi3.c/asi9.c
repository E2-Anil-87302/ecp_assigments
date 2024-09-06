#include<stdio.h>
int main()
{
  int i,num1,num2,gcd;
  printf("Enter the numbers you want to print grattest divisor of.\n");
  scanf("%d%d",&num1,&num2);
   for(i = 1; i <= num1 || i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0)
            printf("%d %% %d = %d",num1,num2,i);
	gcd=i;
    }
  printf("%d\n",gcd);
  return 0;
}
