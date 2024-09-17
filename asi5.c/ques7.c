#include<stdio.h>
void change();
void get();
void print();
void selection();
int main()
{
int arr[5];
get(arr);
printf("Before sorting.\n");
print(arr);
printf("\nAfter sorting the array by selection sort.\n");
selection(arr);
print(arr);
return 0;
}

void get(int *p)
{
	for(int i =0;i<5;i++)
	scanf("%d",p+i);
}
void print(int *p1)
{
	for (int i=0;i<5;i++)
	printf("%-3d",*(p1+i));
	printf("\n");
}
void selection(int *p)
{
	for(int i=0;i<5-1;i++)
	{
		for(int j = i+1;j<5;j++)
		{
			if( p[i] > p[j] )
			change(&p[i],&p[j]);
		}
	}
}
void change(int *p1, int *p2)
{
int temp;
temp = *p1;
*p1 = *p2;
*p2 = temp;
}








