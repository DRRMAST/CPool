#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int my_putstr(char const *str);
void my_putchar(char c);
int main(int argc,char **argv)
{
	int i = 0;
	while(i < argc){
		my_putstr(argv[i]);
		my_putchar('\n');
		i++;
	}
	return 0;
}
