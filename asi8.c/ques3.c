#include<stdio.h>
void accept();
void pritn();
typedef struct student{
  int roll_no;
  char name;
  int marks;
}stud;
int main()
{
  stud s1;
  accept(&s1);
  print(&s1);
  return 0;
}
void accept(stud *s1)
{
  printf("Enter student details.(roll_no, name , marks).\n");
  scanf("%d %s %d",&s1->roll_no,&s1->name,&s1->marks);
}
void print(stud *s1)
{
  printf("Roll_no : %d\nName : %s\nMarks : %d",s1->roll_no,s1->name,s1->marks);
}
