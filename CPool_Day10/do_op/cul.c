#include "./lib/my.h"
int cul(int v1,char op,int v2)
{
	int re = 0;
	if(op == '+'){
		re = v1 + v2;
	}
	if(op == '-'){
		re = v1 - v2;
	}
	if(op == '*'){
		re = v1 * v2;
	}
	if(op == '/'){
		re = v1 / v2;
	}
	if(op == '%'){
		re = v1 % v2;
	}
	my_put_nbr(re);
	my_putchar('\n');
	return 0;
}
