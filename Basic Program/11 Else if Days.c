//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
     int Day = 0;
     
     printf("\n Enter Your Number Of Week (1-7) => ");
     scanf("%d",&Day);
     
     if(Day == 1)
     {
       printf("\n Monday \n");
     }
     else if(Day == 2)
     {
       printf("\n Tuesday \n");
     }
     else if(Day == 3)
     {
       printf("\n Wensday \n");
     }
     else if(Day == 4)
     {
       printf("\n Thursday \n");
     }
     else if(Day == 5)
     {
       printf("\n Friday \n");
     }
     else if(Day == 6)
     {
       printf("\n Saturday \n");
     }
     else if(Day == 7)
     {
       printf("Sunday \n");
     }
     else
     {
       printf("\n Only 7 Number of Weeks\n");
     }
     printf("\ Thanks... ");
     
     getch();
     return 0;
}