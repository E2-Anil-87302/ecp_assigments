#include<stdio.h>
int flag=0;
void leap();
void days();
int main(void)
{
  int year, month;
  printf("enter year number and months ");
  scanf("%d%d",&year,&month);
  leap(year);
  days(month);
  return 0;
}

void leap(int year)
{

  if(year % 4 == 0)
  {
	if (year % 100!=0)
	{
	  printf("It is a leap year \n");
	  flag++;
	}
	else if (year % 400== 0)
	{
	  printf("it is a leap year\n");
	  flag++;
	}

	else{
	  printf(" it is not a leap year\n");
	}

  }
  else
  {
	printf("it is not a leap year\n");
  }
}
void days(int month)
{
  switch(month)
  {
	case 1:
	  printf("Number of days are 31.\n");
		break;
	case 2:
	  if (flag == 1)
	  {
		printf("29 days\n");
	  }
	  else
	  {
		printf("28 days\n");
	  }
	  break;
	case 3:
	  printf("Number of days are 31.\n");
	  break;
	case 5:
	  printf("Number of days are 31.\n");
	  break;
	case 7:
	  printf("Number of days are 31.\n");
	  break;
	case 9:
	  printf("Number of days are 31.\n");
	  break;
	case 11:
	  printf("Number of days are 31.\n");
	  break;
	default:
	  printf("30 days.\n");


  }
}






