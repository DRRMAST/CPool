#include <stdio.h> 
#include <stdlib.h>
int my_putstr(char *);
void my_putchar(char );
int my_put_nbr(int );
int my_show_word_array( char * const *tab );
struct info_param *my_params_to_array ( int ac , char **av );


int my_show_param_array( struct info_param const *par ) 
{
	while((*par).str){
		my_putstr((*par).str);
		my_putchar('\n');
		my_put_nbr((*par).length);
		my_putchar('\n');
		my_show_word_array((*par).word_array);
		par++;
	}
	return 0;
}
