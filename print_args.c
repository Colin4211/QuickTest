/*
*  print_args.c
*
*  LocalTask1.
*     Added a line at start
*
*
*
*/

#include <stdio.h>

int  main( int argC, const char * argV[] )
{
	printf( "---------------------------------------------\n" );
	for ( int nIndex = 0; nIndex < argC; nIndex++ )
	{
		printf( "ARG[%d] -->%s<--\n", nIndex, argV[nIndex] );
	}
	return (0);
}

