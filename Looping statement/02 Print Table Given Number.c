//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, Cnt =0;
       
       printf("\n Enter A Number To Print it's Table => ");
       scanf("%d",&No);
       
       for(Cnt = 1; Cnt <10; Cnt++)
       {
         printf("\n\t %3d * %3d = %3d",No,Cnt,(No * Cnt));
       }
       
       getch();
       return 0;
}