//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, dsum = 0, Temp = 0;
    up:
      printf("\n Enter Postive Integer Number To Calculate its Digit Sum = ");
      scanf("%d",&No);
      
      Temp = No;
      
      if(No < 0)
      {
        printf("\n Invalid Input... ");
        goto up;
      }
      while(Temp > 0)
      {
        Dig=Temp%10;
        dsum=dsum+Dig;
        Temp=Temp/10;
      }
      printf("\n\n Sum of Digits in Given Number %d is = %d.",No,dsum);
      
      getch();
      return 0;
      
}
  
