#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*checks what is the given token from the list as follows*/
int what(char *token)
{
   char *typtbl[] = {
        "mov",
        "cmp",
        "add",
        "sub",
        "not",
        "clr",
        "lea",
         "inc",
        "dec",
         "jmp",
        "bne",
       "red",
      "prn",
      "jsr",
    "rts",
      "stop",
      ".data",
    ".string",
    ".extern",
    ".entry",        
            NULL
    };

    

    int i = 0;
    while(typtbl[i] && !(strcmp(typtbl[i], token) == 0)) {
        ++i;
    }

    if(!typtbl[i])
        i = -1;

    return i;
}
