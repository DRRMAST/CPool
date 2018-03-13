#include <unistd.h>
#include "../src/my_put_nbr.h"
#include "../src/my_putchar.h"

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
