#include<stdio.h>
void add();
void sub();
void div();
void multi();
int flag;
int main()
{ 
  int num1,num2;
  char op;

  printf("Enter two numbers.\n");
  scanf("%d%d",&num1,&num2);
  printf("which opeartion you wanna perform.\n");
  scanf("%*c%c",&op);

  switch(op)
  { 
	case '+': add(&num1,&num2);
			  break;
	case '-': sub(&num1,&num2);
			  break;
	case '*':multi(&num1,&num2);
			 break;
	case '/':div(&num1,&num2);
			 break;
  }
  return 0;
}
void add (int *adi1, int *adi2)
{
  printf("ADDDITION = %d\n",(*adi1)+(*adi2));
}
void sub(int *adi1,int *adi2)
{ 
  printf("SUBTRACTION = %d\n",(*adi1)-(*adi2));
}
void div(int *adi1,int *adi2)
{ 
  if ((*adi2)== 0)
  {
	flag = 1;
	printf("Enter a valid input.\n");
  }
  else
	printf("DIVISION = %.2f\n",(float)(*adi1)/(*adi2));
  
}
void multi(int *adi1,int *adi2)
{
  printf("MULTIPICAION = %d\n",(*adi1)*(*adi2));
}


