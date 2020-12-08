# include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>

/*checks what kind of operand is given*/
int what_op(char *op)
{
int opt;
 if(is_sym(op))
  opt=3;
 if(is_r(op)
  opt=5;
 if(is_num(op)
  opt=1;

return opt;
}
