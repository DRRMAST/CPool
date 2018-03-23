#include <stdio.h>
#include <stdlib.h>]
char *my_strncat(char *,char const*);
int my_strlen(char const*);
int my_show_word_array( char * const *tab );
int my_putstr(char *);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src ) ; 

struct info_param *my_params_to_array ( int ac , char **av ) 
{
	struct info_param *p = malloc(sizeof(struct info_param) * (ac + 1));
	int i = 0;
	while(i < ac ){
		p[i].length = my_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = my_strdup(av[i]);
		p[i].word_array = my_str_to_word_array(av[i]);
		i++;
	}
	p[i].str = 0;
	return p;
}

