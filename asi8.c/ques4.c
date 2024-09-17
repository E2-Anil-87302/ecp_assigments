#include<stdio.h>
void show();
void accept();
typedef struct student_info{
  int roll_num;
  char name[10];
  int marks;
  short int age;
}stud_i;
int main()
{
  stud_i s1={11,"Anil",23};
  stud_i s2 = {22,"satyam",24};
  stud_i s3 = {23,"mayur",25};
  int key;
  printf("Enter the roll number you want to search the info(11,22,33)\n");
  scanf("%d",&key);
  for(int i = 1;i<=3;i++)
  {
	if((s[i]).roll_num == key)
	  printf("%d %s %d",s[i].roll_num,s[i].name,s[i].marks);

  }
  return 0;
}
