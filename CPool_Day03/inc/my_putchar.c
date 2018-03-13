#include <unistd.h>
#include "../src/my_putchar.h"

void my_putchar(char c)
{
	write(1,&c,1);
}
