#include<stdio.h>
int main()
{
  float bill, discounted,discount=0;
  short int quantity;
  printf("Enter the qunatity how much you want to buy.\n");
  scanf("%hd",&quantity);
  if(quantity<=30)
  {
	bill = quantity*5;
	printf("Your bill is %.2f\nTHANKS FOR SHOPPING HAVE A GOOD DAY.\n",bill);
  }
  else if(quantity>30  && quantity<50)
  {
	bill = quantity * 5;
	discount = bill *0.10;
	printf("discount = %.2f\n",discount);
	printf("After cutting discount\n your discounted bill is %.2f\nTHANKS FOR SHOPPING HAVE A GOOD DAY.\n",bill-discount);
  }
  else if(quantity>=50)
  {
	bill = quantity * 5;
	discount = bill * 0.15;
	printf("discount = %.2f\n",discount);
	printf("After cutting discount\nyour discounted bill is %.2f\nTHANKS FOR SHOPPING HAVE A GOOD DAY.\n",bill-discount);
  };
  return 0;
}
