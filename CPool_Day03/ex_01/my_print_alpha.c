#include <stdio.h>
#include <unistd.h>
#include "../tests/my_print_alpha.h"

int my_putchar(char c);
int my_print_alpha(void)
{
	char t = 'a';
	while(t <= 'z')
	{
		my_putchar(t);
		t++;
	}
	return 0;
}
