/*
*  print_args.c
*
*  LocalTask1.
*     Added a line at start
*
*  LocalTask2.
*     Added a line at end and a title line
*
*/

#include <stdio.h>

int  main( int argC, const char * argV[] )
{
	printf( "print_args\n" );
	printf( "---------------------------------------------\n" );
	for ( int nIndex = 0; nIndex < argC; nIndex++ )
	{
		printf( "ARG[%d] -->%s<--\n", nIndex, argV[nIndex] );
	}
	printf( "---------------------------------------------\n" );
	return (0);
}

