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
                          *com_node next;}

com_node* make_com(void)
{
 com_node * head;
 head=(com_node *)malloc(sizeof(com_node);
 return head;
}
