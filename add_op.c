# include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>

typedef struct com_node{
                        int op1:3;
                        int optype:4;
                        int op2:3;
                        int ARE:2;
                        int word:12;
                        int half1:6;
                        int half2:6;
                        int num:10;
                          *com_node next;}
 int add_sym(*char token, *sym_node head, int type);                       

/*adds ino about command to the command lines of code*/
 com_node* add_op(com_node* now,int optype,char *op1,char *op2,IC)

{
 int ARE;
 com_node * ptr;
 com_node * ptr1;
 com_node * ptr2;
 if(legal_operands(optype,op1,op2))
   { ptr=(com_node*)malloc(sizeof(com_node));
     ptr.op1=what_op(op1);
     ptr.op2=what_op(op2);
     ptr.optype=optype;
     now.next=ptr;
     IC++;
    
    if(what_op(op1)==1)
     { ptr1=(com_node*)malloc(sizeof(com_node));
      ptr1.num=atoi(op1);
      ptr.next=ptr1;
      ptr=ptr1;
      IC++;}

    if(what_op(op1)==3)
      {add_sym(op1,head,NULL);
      ptr1=(com_node*)malloc(sizeof(com_node));
      ptr1.num=DC;
      ptr.next=ptr1;
      ptr=ptr1;
      IC++;}

   if(what_op(op1)==5)
    {ptr1=(com_node*)malloc(sizeof(com_node));
     ptr1.half1=is_r(op1);
     ptr.next=ptr1;
     ptr=ptr1;
     IC++;}

   
    if(what_op(op2)==1)
     { ptr2=(com_node*)malloc(sizeof(com_node));
      ptr2.num=atoi(op2);
      ptr.next=ptr2;
      ptr=ptr2;
      IC++;}

    if(what_op(op2)==3)
      {add_sym(op2,head,NULL);
      ptr2=(com_node*)malloc(sizeof(com_node));
      ptr2.num=DC;
      ptr.next=ptr2;
      ptr=ptr2;
      IC++;}

   if(what_op(op2)==5)
    {ptr2=(com_node*)malloc(sizeof(com_node));
     ptr2.half2=is_r(op2);
     ptr.next=ptr2;
     ptr=ptr2;
     IC++;}
     
return ptr;
}

  
    
   
