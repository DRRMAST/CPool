#include <stdlib.h>
#include <stdio.h>
#include "./lib/my.h"
int check_letter(char letter,char *l)
{
	if(letter >= 'A' && letter <= 'Z')
		letter = letter + 32;
	int i = 0;
	int flag = 0;
	char c;
	while(l[i]){
		c = l[i];
		if(c >= 'A' && c <= 'Z')
			c = c + 32;
					
		if(letter == c){
			flag = 1;
			break;
		}
		i++;
	}
	if(flag == 1)
		return i;
	else
		return -1;
}

int put_percentage(float f)
{
	int s;
	int to_put;
	s = (int)(f * 10000);
	my_putchar('(');
	to_put = s / 100;
	my_put_nbr(to_put);
	my_putchar('.');
	to_put = s / 10 % 10;
	my_put_nbr(to_put);
	to_put = s % 10;
	my_put_nbr(to_put);
	my_putchar('%');
	my_putchar(')');
	return 0;
}
int show_data(char *letter,int *count,float *re,int ac)
{
	int i = 0;
	while(i < ac - 2){
		my_putchar(letter[i]);
		my_putchar(':');
		my_put_nbr(count[i]);
		my_putchar(' ');
		put_percentage(re[i]);
		my_putchar('\n');
		i++;	
	}
	return 0;
}
int find_lang(char *letter,float *fre,int ac);
int rush2_v2(int ac,char **av);
int rush2(int ac,char **av)
{
	int letters = ac - 2;
	int c_str = 0;
	int i = 0;
	int j = 0;
	int l_f;
	int temp;
	char *letter = malloc(sizeof(char) * (ac - 1));
	int *count = malloc(sizeof(int) * (ac - 2));
	float *re = malloc(sizeof(float) * (ac - 2));
	while(i < letters){
		letter[i] = av[i + 2][0];
		i++;
	}
	letter[i] = 0;
	i = 0;
	while(av[1][j]){
		if((av[1][j] >= 'a' && av[1][j] <= 'z') || (av[1][j] >= 'A' && av[1][j] <= 'Z')){
			c_str++;
		}
		l_f = check_letter(av[1][j],letter);
		if(l_f >= 0){
			count[l_f]++;
		}
		j++;
	}
	i = 0;
	while(i < ac -2){
		re[i] = (float)count[i] / (float)c_str;
		i++;
	}
	show_data(letter,count,re,ac);
	find_lang(letter,re,ac);
	//rush2_v2(ac,av);
	return 0;
}
