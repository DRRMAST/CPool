#include <stdlib.h>
int find_lang(char *letter,float *fre,int ac);
int rush2_v2(int ac,char **av)
{
	int letters = 25;
	int c_str = 0;
	int i = 0;
	int j = 0;
	int l_f;
	int temp;
	char *letter = malloc(sizeof(char) * 27);
	int *count = malloc(sizeof(int) * 26);
	float *re = malloc(sizeof(float) * 26);
	while(i < 26){
		letter[i] = i + 'a';
		i++;
	}
	letter[i] = 0;
	i = 0;
	while(av[1][c_str]){
		j = 0;
		while(j < 26)
		{
			if((av[1][c_str] == (j + 'a')) || (av[1][c_str] == (j + 'A'))){
				count[j]++;
				break;
			}
			j++;
		}
		c_str++;
	}
	i = 0;
	j = 0;
	while(i < 26){
		re[i] = (float)count[i] / (float)c_str;
		i++;
	}
	find_lang(letter,re,ac);
	return 0;
}