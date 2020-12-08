# include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>

/*checks if the operands are legal for the given operation*/
int legal_operands(int optype, char *op1, char *op2)

{
 int op1t;
 int op2t;

 op1t=what_operand(op1);
 op2t=what_operand(op2);

 if((optype>-1)&&(optype<4)&&(!(optype==2)
  if (!(*op1==NULL))
    if((op2t==3)||(op2t==5))
      return 1;

 if(optype==1)
   if (!(*op1==NULL))
      if((op2t==3)||(op2t==1)\\(op2t==5))
      return 1;
 
 if((optype==4)||(optype==5)||((optype>6)&&(optype<12))||(optype==13))
  if(*op1==NULL)
   if((op2==3)||(op2==5))
     return 1;

 if(optype==6)
   if(op1==3)
      if((op2==3)||(op2==5))
       return 1;

 if(optype==12)
  if(*op1==NULL)
      if((op2t==3)||(op2t==1)\\(op2t==5))
      return 1;

 if((optype==14)||(optype==15))
   if((*op1==NULL)&&(*op2==NULL))
     return 1;
 printf("line ___ illegal operands for operation \n");
return 0;
}


