#include <unistd.h>
#include "../src/my_put_nbr.h"

int my_put_nbr(int nb)
{	
	if(nb >= 0)
	{
		if(nb >= 10)
	{
		my_put_nbr(nb / 10);
		nb = nb % 10;
	}
	if(nb >= 0 && nb < 10)
	{
		char r = nb + '0';
		write(1,&r,1);
	}
	}
	else
	{
		char flag = '-';
		nb = nb * -1;
		write(1,&flag,1);
		if(nb >= 10)
	{
		my_put_nbr(nb / 10);
		nb = nb % 10;
	}
	if(nb >= 0 && nb < 10)
	{
		char r = nb + '0';
		write(1,&r,1);
	}
	}

	return 0;
}







