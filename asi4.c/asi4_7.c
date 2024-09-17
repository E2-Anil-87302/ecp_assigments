#include<stdio.h>
void fun();
/*int num,num1;
void calculate();
int main ()
{
printf("Enter two number.\n");
scanf("%d%d",&num,&num1);
calculate();
return 0;
}
void calculate(void)
{
printf("Multiplication : %d\n",num+num1);
printf("Division : %d\n",num*num1);
}*/
int main()
{
int num,num1;
printf("Enter two numbers.\n");
scanf("%d%d",&num,&num1);
fun(&num,&num1);
}
void fun(int *ptr,int *ptr1)
{
	printf("Addiition : %d\n",(*ptr)+(*ptr1));
	printf("Multipplication : %d\n",(*ptr)*(*ptr1));
}
