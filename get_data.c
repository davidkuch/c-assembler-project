# include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_data(* char line,data_node *next, int t, int DC)
{
 int flag=0;
 int c=line[t];
 char str[32];
 char * ptr;
 int i,h;
 
while (!(c=='\n'))
 {   while ((c==' ')||(c==','))
       {if (c==',')
           flag++;
        t++;
        c=line[t];}
   
   while(!(c==' ')||(c==','))
      { str[i]=line[t];
       i++;
       t++;}
   ptr=&str[0];
   e=add_data(next, atoi(ptr),DC);
   h++;
   str=NULL;
}
return h;
}


