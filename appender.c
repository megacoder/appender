/*
 * vim: ts=8 sw=8
 */

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static	char *		fn = "junk.txt";

int
main(
	int		argc,
	char * *	argv
)
{
	FILE *		fyle;
	time_t		now;

	fyle = fopen( fn, "a" );
	if( !fyle )	{
		fprintf( stderr, "cannot open '%s' for appending.\n", fn );
		exit( 1 );
	}
	time( &now );
	fputs( ctime( &now ), fyle );
	fclose( fyle );
	exit( 0 );
}
