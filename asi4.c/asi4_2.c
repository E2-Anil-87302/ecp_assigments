#include<stdio.h>
int power();
int main()
{
int num,p;
printf("Enter a number and its power.\n");
scanf("%d%d",&num,&p);
int res=power(num,p);
printf("result : %d\n",res);
return 0;
}
int power(int n,int p)
{
if(p!=0)
 return n*(power(n,p-1));
else
return 1;
}
