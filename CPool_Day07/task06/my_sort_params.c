#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int my_strcmp(char const *s1,char const *s2);
int my_putstr(char const *str);
void my_putchar(char c);
int main(int argc,char **argv)
{
	int i = 0;
	int j = 0;
	int t;
	int *sort = malloc(argc * sizeof(int));
	while(i < argc)
	{
		sort[i] = i;
		i++;
	}
	i = 0;
	while(i < argc){
		j = i;
		while(j < argc){ 
			if(my_strcmp(argv[sort[i]],argv[sort[j]]) > 0){
				t = sort[j];
				sort[j] = sort[i];
				sort[i] = t;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while(i < argc){
		my_putstr(argv[sort[i]]);
		my_putchar('\n');
		i++;
	}
	free(sort);
	return 0;
}
