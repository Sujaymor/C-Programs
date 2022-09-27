//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
      int r = 0, c = 0, cnt = 0;
  
      printf("\n Enter a number => ");
      scanf("%d",&cnt);
      
      for(r=1; r<=cnt; r++)
      {
        for(c=1; c<=cnt; c++)
        {
          if(r==c || r+c==cnt+1)
          {
            printf(" * ");
          }
          else
          {
            printf("   ");
          }
        }
        printf("\n");
      }
      
      getch();
      return 0;
      
}
  
  