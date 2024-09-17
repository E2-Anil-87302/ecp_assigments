#include<stdio.h>
typedef struct student {
int roll_no;
char name[20];
int marks;
}stud;
int main()
{
stud s1;
printf("Enter the student info (roll_no name marks)");
scanf("%d%*c%s%d",&s1.roll_no,s1.name,&s1.marks);
printf("Roll_no = %d\nStudent name = %s\namrks = %d\n",s1.roll_no,s1.name,s1.marks);
return 0;
}
