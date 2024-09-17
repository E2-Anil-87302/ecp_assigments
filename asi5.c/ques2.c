#include<stdio.h>
void array();
void print();
int main()
{
  int arr[5];
  printf("Enter 5 integer.\n");
  array(arr);
  print(arr);
  return 0;
}
void array(int *ptr)
{
  int i;
  for(i = 0;i<5;i++)
  {
	scanf("%d",ptr + i);
  }
}
void print(int *p)
{
	for(int i = 0;i<5;i++)
	printf("Elemets of array are: %d\n",*(p + i));
}
