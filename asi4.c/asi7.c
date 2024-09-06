#include<stdio.h>
void fib();
// To print fibonnaci series of a number
int main()
{
    int n;
    printf("Enter the number till u want to print the fibonnaci searies ");
    scanf("%d", &n);
 	fib(n);


    return 0;
}
void fib(int n)
{

    int first = 0, second = 1, nextrm;
    for (int i = 0; i < n; ++i)
    {
        printf("%d",first);
        nextrm = second + first;
        first = second;
        second = nextrm;
        printf("\n");
    }
}

