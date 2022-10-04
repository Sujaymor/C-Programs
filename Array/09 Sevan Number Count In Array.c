//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
     int Arr[5] = { }, i = 0, S_cnt = 0;
     
     for(i = 0; i < 5; i++)
     {
       printf("\n Enter Element %d => ",i+1);
       scanf("%d",&Arr[i]);
     }
     
     for(i = 0; i < 5; i++)
     {
       if(Arr[i]==7)
       {
         S_cnt++;
       }
     }
     printf("\n Sevan Count in Given Element is %d",S_cnt);
     
     getch();
     return 0;
     
}
