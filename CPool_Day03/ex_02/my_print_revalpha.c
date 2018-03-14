#include <stdio.h>
#include <unistd.h>
#include "../tests/my_print_revalpha.h"
int my_print_revalpha(void)
{
	char t = 'z';
	while(t >= 'a')
	{
		write(1,&t,1);
		t--;
	}
	return 0;
}

