#include <unistd.h>
#include "my_isneg.h"

int main(void)
{
	char r;
	r = my_isneg(1);
	write(1,&r,1);
	r = my_isneg(-1);
	write(1,&r,1);
	r = my_isneg(0);
	write(1,&r,1);
	return 0;
}
