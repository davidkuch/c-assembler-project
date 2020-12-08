# include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>

int DC;
int IC;
int err;


main(int argc, char *argv[] )
{
 char line[80];
 char token1[32];
 char token2[32];
 FILE *fd;
 int t=0;
 int type;
 char op1[32];
 char op2[32];
 int g;
 char name[80]; 

 while(g<argc)/*the loop would go through all given files*/
 {name=concat(argv[g],".as") 
  fd= fopen(name, "r");
      /*first round*/
          while ( fgets ( line, sizeof(line), fd ) != NULL ) /* read a line */
               {
                t=get_token(line,token1,t)
                if(is_sym(token1));
                  s_flag=1;
                  type=what(token1);
                  if((type==1)||(type==2))
                     
                t=get_token(line,token2,t);
                
                
                   
   
     /*second round*/


     /*creating output files*/


     /*freeing memory from dynamic allocation*/

 


 
