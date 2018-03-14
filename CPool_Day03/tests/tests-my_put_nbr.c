#include <unistd.h>
#include "my_put_nbr.h"

int main(void)
{
	my_put_nbr(-1234567890);
	my_putchar('\n');
	my_put_nbr(1234567890);
	my_putchar('\n');
	my_put_nbr(00);
	my_putchar('\n');
	return 0;
}
