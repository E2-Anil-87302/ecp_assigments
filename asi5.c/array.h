#include<stdio.h>
void array(int *ptr)
{
 int i;
  printf("Enter array elemnts.\n");
  for(i = 0;i<8;i++)
  {
	scanf("%d",ptr + i);
  }
}
void print(int *p)
{
	for(int i = 0;i<8;i++)
	printf("Elemets of array are: %d\n",*(p + i));
} 
