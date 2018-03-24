#include "./include/my.h"
int my_sort_word_array(char **tab)
{
	int len = 0;
	char **tl = tab;
	int i = 0;
	int j = 0;
	while(*tl != 0)
	{
		len ++;
		tl ++ ;
	}
	while(i < len - 1)
	{
		while(j < len -i -1)
		{
			if(my_strcmp(*(tab + j), *(tab + j + 1)) > 0)
			{
				char *temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp; 
			}
			j++;
		}
		i++;
	}
	return 0;
}

