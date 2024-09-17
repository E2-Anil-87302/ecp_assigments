#include<stdio.h>
void swap();
int main()
{
int num,num1;
printf("Enter two number to swap.\n");
scanf("%d%d",&num,&num1);
printf("Before swap num : %d\tnum1 : %d\n",num,num1);
swap(&num,&num1);
printf("After swap num : %d\tnum1 : %d\n",num,num1);
return 0;
}
void swap(int *ptr,int *ptr1)
{
int temp=*ptr;
*ptr = *ptr1;
*ptr1 = temp;
}
