# include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*checks if the token is a register*/
int is_r(char *token)
{
 if(*token=='@')
   if(*(token+1)=='r')
     if(*(token+2)>-1&&(*(token+2)<8))
        return *(token+2);

return -1;
}
