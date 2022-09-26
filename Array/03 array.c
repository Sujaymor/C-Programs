//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int values[5]; ///Declaration of in 5 integer elements array
                   ///As no initialization done we get garbage values for all elements
    
    printf("\n values of 1st Element = %d",values[0]);
    printf("\n values of 2nd Element = %d",values[1]);
    printf("\n values of 3rd Element = %d",values[2]);
    printf("\n values of 4th Element = %d",values[3]);
    printf("\n values of 5th Element = %d",values[4]);
     
    getch();
    return 0;
    
 }
     
  
  
  
  
  