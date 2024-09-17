#include<stdio.h>
void accept();
void show();
typedef struct student{
  int roll_num;
  char name[20];
  int marks;
}stud;

int main()
{
  stud s1;
  accept(&s1);
  show(&s1);
}
void accept(stud *ptr)
{
	printf("Enter stundent info( roll_no Name marks)");
	scanf("%d%s%d",&ptr->roll_num,ptr->name,&ptr->marks);
}
void show(stud *ptr)
{
	printf("roll_num = %d\nName = %s\nMarks = %d\n",ptr->roll_num,ptr->name,ptr->marks);
}
