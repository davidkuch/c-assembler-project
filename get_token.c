# include <stdio.h>
#include <string.h>
#include <stdlib.h> 
/* this function fills an array "token" defined in main with the first token it encounters in the array
   "line"- the line from the source document. it starts from the point defined by the int stat, and sends back the end point of the token. */
int get_token( *char line, *char token, int start)
{
 int i=0;
 while (!(*(line+1)== ' '&&!(*(line+1)== ", ")
   {
     token[i]=line[start];
     i++;
     start++;
                       }
 
  return start;
}
