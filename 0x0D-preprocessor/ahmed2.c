#include <stdio.h>
#include <stdlib.h>
char array[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:";
main ( ) {
        char * str,* j,* i,* p2,* malloc (),* gets ( );
        for( str=malloc ( 81 ),i=str++;str==gets ( str );putchar('\n') )
                for ( j=str;*j;putchar ( *p2?morse ( * i ):'?'),putchar(' '),j ++ ) 
                        for (* i=2,p2=array; * p2&&(* p2!=( * j>='a'? *j&223:* j ) ); (* i ) ++,p2 ++ )
                                * i+= ( * p2>='a'? * p2-'a':0);
}
morse ( i ){
        putchar (i>3?morse ( i>>1 ):'\0');
        return i&1?'-':'.';
}
//char i;
putchar ( i ) 
{
                ( void ) write ( 1,&i,1 );
}

for
