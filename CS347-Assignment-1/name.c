#include <stdio.h>
#include "lex.h"

char  *Names[] = { "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7" };   
char  **Namep  = Names;   
   
char  *newname(void)   
{   
    if( Namep >= &Names[ sizeof(Names)/sizeof(*Names) ] )   
    {   
        fprintf( stderr, "%d: Expression too complex\n", yylineno );   
        exit( 1 );   
    }   
   
    return( *Namep++ );   
}   
   
void freename(char *s)     
{   
    if( Namep > Names )   
    *--Namep = s;   
    else   
    fprintf(stderr, "%d: (Internal error) Name stack underflow\n",   
                                yylineno );   
}   
