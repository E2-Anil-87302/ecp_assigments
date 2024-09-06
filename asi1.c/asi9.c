#include<stdio.h>
int main()
{
  float celsius,fahrenheit ;
  printf("Enter the tempreature in celcius \n");
  scanf("%f",&celsius);
  fahrenheit=((celsius*9)/5)+32;

  printf("temperature in fahrenheit is:%.2f\n",fahrenheit);
  return 0;

}
