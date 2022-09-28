//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0;
    up:
      printf("\n Enter Postive Integer Number  = ");
      scanf("%d",&No);
      
      Temp = No;
      
      if(No < 0)
      {
        printf("\n Invalid Input... ");
        goto up;
      }
      
      while(Temp > 0)
      {
        /// Processing logic
        Temp=Temp/10;
      }
      printf("\n\n Output");
      
      getch();
      return 0;
      
}
  
