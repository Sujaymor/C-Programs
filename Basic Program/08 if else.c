//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
      int Age = 0;
      
      printf("Enter Your Age");
      scanf("%da",&Age);
      
      if(Age > 18)
      {
        printf("Eligible For Voting");
      }
      else
      {
        printf("Not Eligible For Voting... ");
      }
      
      getch();
      return 0;
}