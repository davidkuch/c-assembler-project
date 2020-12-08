# include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/*the functions checks of the given token is a symbol*/
int is_sym(char *line,char* token,int mode)
{
 
 
 
 int i=0;
 while((isalpha(*token[i]))||(isdigit(*token[i])))
  i++;
  
 if(mode==1)
   {
    if ((*line==*token)&&(token[i]==':'))
       return 1;}
 
 if(!(i==0))
  return 1;

 return 0;
}

       
