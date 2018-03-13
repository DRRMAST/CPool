#include <stdio.h>
#include <unistd.h>
#include "../src/my_print_alpha.h"
#include "../src/my_putchar.h"

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
