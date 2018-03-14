#include <stdio.h>
#include <unistd.h>
#include "../tests/my_print_digits.h"

int my_print_digits(void)
{
	int t = '0';
	while(t <= '9')
	{
		write(1,&t,1);
		t++;
	}
	return 0;
}
