// display number of days 
#include<stdio.h>
int main()
{
    int month, year;
    printf("Enter the year and month number");
    scanf("%d%d",&year,&month);
    
    switch (month)
    {
    case 1: case 3 : case 5: case 7: case 8: case 10: case 12:
     printf("The number of days are 31. ");
     break;
     case 2:
     if (year %4 == 0 && year % 100 != 0 || year % 400 ==0)
     {
        printf(" number of days are 29");
     }
     else{
        printf("The number of days are 28");
     }break;
     
     case 4: case 6: case 9: case 11:
     printf("Number of days are 30");
     
    }
    return 0;

}
