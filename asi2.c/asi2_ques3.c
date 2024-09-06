#include<stdio.h>
int main()
{
  int dept_no;
  char designation;
  printf("Enter department number and designation.\n");
  scanf("%d%*c%c",&dept_no,&designation);
  if(dept_no == 10 && 20 && 30 && 40)
  {
	printf("Please enter a valid Department.\n");
  }	
	else if (designation == 'm' && 'S' && 's' && 'C')
	  printf("Please enter a valid designation code.\n");
  else
  {
	switch(dept_no)
	{
	case 10: printf("Employee id with 101 is working in market\n");
	         break;

	case 20: printf("Employee id with 201 is working in managment\n");
			 break;

	case 30: printf("Employee id with 301 is working in sales \n");
  			 break;

	case  40: printf("Employee id with 401 is working in Designing\n");
    }
	switch(designation)
 	{
    case 'm' :printf("as a manager.\n");
			  break;

	case 'S': printf("as a supervisor.\n");
			  break;

	case  's':printf("as a security officer.\n");
			  break;
	case 'C': printf("as a clerk.\n");
  }
  return 0;
}
}
