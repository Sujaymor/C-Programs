//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
  int Arr[5] = {};
  
  printf("\n values of 1st Element = %d.",Arr[0]);
  printf("\n values of 2nd Element = %d.",Arr[1]);
  printf("\n values of 3rd Element = %d.",Arr[2]);
  printf("\n values of 4th Element = %d.",Arr[3]);
  printf("\n values of 5th Element = %d.",Arr[4]);
  
  getch();
  
  system("cls");
  
  printf("\n Enter Array Elements => \n\n");
  
  printf("\n Enter Element [0] = ");
  scanf("%d",&Arr[0]);
  printf("\n Enter Element [1] = ");
  scanf("%d",&Arr[1]);
  printf("\n Enter Element [2] = ");
  scanf("%d",&Arr[2]);
  printf("\n Enter Element [3] = ");
  scanf("%d",&Arr[3]);
  
  Arr[3] = 77;
  Arr[2] = 55;
  Arr[4] = 99;
  print("\n Enter Element [4] = ");
  scanf("%d",Arr[4]);
  
  print("\n value of 0 Element = %d.",Arr[0]);
  print("\n value of 1 Element = %d.",Arr[1]);
  print("\n value of 2 Element = %d.",Arr[2]);
  print("\n value of 3 Element = %d.",Arr[3]);
  print("\n value of 4 Element = %d.",Arr[4]);
  
  printf("\n\n Press Any Key To Continue...");
  
  getch();
  return 0;
  
}