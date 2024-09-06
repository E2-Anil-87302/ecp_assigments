#include<stdio.h>
int main()
{
  int num1,num2,num3;
  
  printf("Enter three number \n");
  scanf("%d%d%d",&num1,&num2,&num3);
  /*
  if(num1>num2 && num1>num3){
	printf("num1 is greatest :%d \n",num1);}
  else if(num2>num1 && num2>num3){
	printf("num2 is greatest.%d\n",num2);}
  else{
	printf("num3 is greatest.%d\n",num3);}
  */
  (num1>num2 && num1>num3)?printf("num1 is the gratest")?(num2>num3):printf("num is the greatest. "):printf("num3 is the greatest ");
return 0;
}
