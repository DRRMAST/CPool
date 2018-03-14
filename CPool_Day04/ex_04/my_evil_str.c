#include <unistd.h>
#include <stdio.h>
int my_strlen ( char const * str );
char *my_evil_str(char *str)
{
	int len = 0;
	int i = 0;
	int j = 0;
	char t;
	len = my_strlen(str);
	j = len - 1;
	while(i < len/2)
	{
		t = str[j];
		str[j] = str[i];
		str[i] = t;
		i++;
		j--;
	}
	return str;
}
