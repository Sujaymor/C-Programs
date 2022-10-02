//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
       int Arr[5] = {}, i = 0, src = 0;
       
       for(i = 0; i < 5; i++)
       {
         printf("\n Enter Given Element %d => ",i+1);
         scanf("%d",&Arr[i]);
       }
         printf("\n Enter Searching Elemnent = ");
         scanf("%d",&src);
         
       for(i = 0; i < 5; i++)
       {
         if(Arr[i]==src)
         {
           break;
         }
       }
       if(i < 5)
       {
         printf("\n Enter Elemnet Found On Index");
       }
       else
       {
         printf("\n Enter Element Not Found ");
       }
       
       getch();
       return 0;
       
}