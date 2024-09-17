#include<stdio.h>
void prime();
int range();
int main()
{
int num,num1,num2;
printf("Enter a number to check it is prime or not .\n");
scanf("%d",&num);
prime(num);
printf("Enter the range to print print numbers between them.\n");
scanf("%d",&num1);
printf("The prime numbers between %d and %d are: ",num1, num2);

    for (int i = num1; i <= num2; i++)

    {

        if(prime(i)){

            printf("%d ", i);

        }

    }

    return 0;

return 0;
}
void prime(int n)
{
	int flag=0;
	for(int i=2;i<n;i++)
	{
		if(n % i == 0)
		flag = 1;
		break;
	}
	if(flag == 0 )
 	printf("Number is a prime.\n");
	else
	printf("Number is not a prime.\n");
	
	

}

int range(int n )
{

    for (int i = 2; i*i <= n; i++)

    {

        if (n%i == 0)
		{
            return 0;
        }

    }

    return 1;

}














