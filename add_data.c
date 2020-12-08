# include <stdio.h>
#include <string.h>
#include <stdlib.h>

data_node * add_data(data_node * next, int data, int DC)
{
 data_node * ptr;

 if (next.data==NULL)
   {next.data=data;
   next.address=DC;
   return next; }
 else
    { ptr=(data_node*)malloc(sizeof(data_node);
     ptr.data=data;
     ptr.address=DC;
     DC++:
     next.next=ptr;
     return ptr; }
}

