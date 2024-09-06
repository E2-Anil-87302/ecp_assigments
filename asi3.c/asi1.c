#include<stdio.h>
int main()
{
  int num;
  char c;
  printf("Enter a character and how many times u wanna print the number.\n");
  scanf("%c%d",&c,&num);
  while(num!=0)
  {
	printf("%c\n",c);
	num--;
  }
  return 0;
}
