#include <string.h>
#include <stdlib.h> 
#include <stdio.h>


int get_operand(int * line, int * operand, int t, int mode)
{
 int i=0;
 if (mode==1)
   {
    while(line[t]== ' ')
          t++;

    while(!(line[t]== ' ') &&(!line[t]== ","))
        { operand[i]=line[t];
         i++;
         t++;}
   
   return i;
   }

 if (mode==2)
  {
   while(line[t]== ' ')
          t++;
   if (line[t]== ",")
     t++;
   return get_operand(line,operand,t,1);
}
