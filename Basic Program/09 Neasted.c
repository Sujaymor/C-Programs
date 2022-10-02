//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
      char ch = '\0';
      printf("\n Enter a Character => ");
      scanf("%c",&ch);
      
      if(ch >= 'A' && ch <= 'Z')
       {
         printf("\n Given Character Upper Case");
       }
       else if(ch >='a' && ch <= 'z')
       {
         printf("\n Given Character Lower Case");
       }
       else
       {
         printf("\n Given Character Neither Upper case Not Lower Case");
       }
       
       printf("\n\n Thanks");
       
       getch();
       return 0;
       
}
