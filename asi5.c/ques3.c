#include<stdio.h>
void get();
void print();
int main()
{
	int arr[5];
	printf("Enter the array elements.\n");
	get(&arr);
	print(&arr);
return 0;
}
void get(int *p)
{
	for(int i =0;i<5;i++)
	scanf("%d",p+i);
}
void print(int *p1)
{
	for (int i=4;i>=0;i--)
	printf("%-3d",*(p1+i));
	printf("\n");
}
