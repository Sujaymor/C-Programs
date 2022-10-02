//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
      int Arr[5]= { }, i = 0,Zcnt = 0;
       
      for(i = 0; i < 5; i++)
      {
        printf("\n Enter Element %d => ",i+1);
      }
      for(i = 0; i < 5; i++)
      {
        if(Arr[i]==0)
        {
          Zcnt++;
        }
      }
      printf("\n Zero Count in Given Number is %d.",Zcnt);
      
      getch();
      return 0;
      
}