#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int my_putchar(char c);

int my_strlen ( char const * str );

int find_base(char c,char *base)
{
	int i = 0;
	while(*base){
		if(c == *base)
			return i;
		i++;
		base++;
	}
	return 0;
}

int my_compute_power_it(int nb, int p);

int check_str(char *str,char *base)
{
	int s_len,b_len;
	int i = 0,j = 0;
	s_len = my_strlen(str);
	b_len = my_strlen(base);
	if(s_len == 0 || b_len == 0)
		return 0;
	while(str[i]){
		j = 0;
		while(base[j]){
			if(str[i] == base[j])
				break;
			j++;
		}
		if(j == b_len)
			return 0;
		i++;
	}
	i = 0;
	j = 0;
	while(base[i]){
		j = 0;
		while(base[j]){
			if(i == j){
				j++;
				continue;
			}
			if(base[i] == base[j])
				return 0;
			j++;
		}
		i++;
	}
	j = 0;
	while(base[j]){
		if(base[j] == '+' || base[j] == '-')
			return 0;
		j++;
	}
	return 1;
}
int my_getnbr_base ( char const *str , char const *base )
{
	char *p = (char *)str;
	int re = 0;
	int minus = 0;
	int nbr_len;
	int i = 0;
	int base_type;
	int find;
	if(check_str((char *)str,(char *)base) == 0)
		return 0;
	base_type = my_strlen(base);
	while(*p){
		if(*p == '-' || *p == '+'){
			if(*p == '-')
				minus++;
			p++;
		}	
		else{
			
			break;
		}
	}
	nbr_len = my_strlen(p) - 1;
	while(nbr_len >= 0){
		find = find_base(p[i],(char *)base);
		re = re + find * my_compute_power_it(base_type,nbr_len);
		i++;
		nbr_len--;
	}
	if(minus % 2 == 1)
		re = re * -1;
	return re;
}
