//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
   int values [5] ={0};
   
   printf("Enter Element No 1 = ");
   scanf("%d",&values[0]);
   
   printf("Enter Element No 2 = ");
   scanf("%d",&values[1]);
   
   printf("Enter Element No 3 = ");
   scanf("%d",&values[2]);
   
   printf("Enter Element No 4 = ");
   scanf("%d",&values[3]);
   
   printf("Enter Element No 5 = ");
   scanf("%d",&values[4]);
   
   getch();
   system(" cls");
   
   printf("\n\n Elements in Array are => \n\n");
   
   printf("\n value of 101 Element = %d",values[0]);
   printf("\n value of 102 Element = %d",values[1]);
   printf("\n value of 103 Elemnet = %d",values[2]);
   printf("\n value of 104 Element = %d",values[3]);
   printf("\n value of 105 Element = %d",values[4]);
   
   getch();
   return 0;
   
  
 }
   
   