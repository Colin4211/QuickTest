/*
*  print_args.c
*/

#include <stdio.h>

int  main( int argC, const char * argV[] )
{
	for ( int nIndex = 0; nIndex < argC; nIndex++ )
	{
		printf( "ARG[%d] -->%s<--\n", nIndex, argV[nIndex] );
	}
	return (0);
}

