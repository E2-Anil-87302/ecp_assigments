#include<stdio.h>
void binary();
int main ()
{
  int num;
  printf("Enter a number.\n");
  scanf("%d",&num);
  binary(num);
  return 0;
}
void binary(int n)
{
  int arr[32];
  int i=0;
  while(n>0)
  {
	arr[i] = n%2;
	n = n/2;
	i++;
  }
for(int j=i-1;j>=0;j--)
printf("%d",arr[j]);
}
