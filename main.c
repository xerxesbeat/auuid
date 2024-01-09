#include <stdio.h>
#include <uuid/uuid.h>

int main ( int argc, char** argv )
{
	uuid_t uuid;
	uuid_generate_random( uuid );
	char buffer[37];
//	uuid_unparse_upper( uuid, &buffer );
//	uuid_unparse_lower( uuid, &buffer );
	uuid_unparse( uuid, (char*) &buffer );
	printf( "%s\n", buffer );
	return 0;
}
