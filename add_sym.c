#include <stdio.h>
#include <string.h>

/*the function would add symbols to the symbols table*/

int add_sym(*char token, *sym_node head, int type)

{
 *sym_node temp1,temp2;
 temp1=head;

   while (!(temp1.next==NULL))
    {   if (compstr(token, temp1.name))
          temp1=temp1.next;
        else
           { printf("error: symbol defined more then one time \n");
            return 0;}
    }
   if (temp1.name==NULL)
     temp1.name=token;
     temp1.type=type;
     temp1.address=DC;
    else
      { temp2=(*sym_node)malloc(sizeof(sym_node);
       temp2.name=token;
       temp2.type=type;
       temp2.address= DC;
       temp1.next=temp2;}
   return 1;
}
  
