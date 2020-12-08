# include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_string(char* line,data_node *next, int t, int DC)
{
 char c=*line[t];
 char str[32];
 int i;
 char* ptr
  while((c==' ')||(c=="\""))
   { t++;
    c=*line[t];}
 
 while(!(c=="\"")
  { str[i]=c;
    c=*line[t];
   i++;
   t++; }
 
 ptr=&str[0];
 e=add_data(next, atoi(ptr),DC);
return;
}
