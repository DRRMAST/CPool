#include <unistd.h>
#include "../tests/my_isneg.h"
int my_isneg(int n)
{
	char r = 'P';
	if(n < 0)
		r = 'N';
	else
		r = 'P';
	return r;
}

