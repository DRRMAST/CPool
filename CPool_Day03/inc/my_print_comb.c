#include <unistd.h>
#include "../src/my_print_comb.h"
#include "../src/my_putchar.h"

int my_print_comb(void)
{
	int n = 0;
	char a1,a2,a3;
	
	while(n < 1000)
	{
		a1 = n / 100 % 10 + '0';
		a2 = n / 10 % 10 + '0';
		a3 = n % 10 + '0';
		if(a3 <= a2 || a2 <= a1)
		{
			n++;
			continue;
		}
		my_putchar(a1);
		my_putchar(a2);
		my_putchar(a3);
		if(n != 789)
			my_putchar(',');
		n++;
	}
	return 0;
}


