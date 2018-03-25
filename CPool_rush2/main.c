#include "./lib/my.h"
#include <stdlib.h>
#include <stdio.h>
int rush2(int ac,char **av);
int put_percentage(float f);
int main(int argc,char **argv)
{
	int i = 2;
	int flag = 0;
	if(argc == 1)
		return 0;
	if(my_strlen(argv[1]) < 1)
		return 0;
	while(i < argc){
		if(my_strlen(argv[i]) != 1 || (argv[i][0] < 'A' || 
		(argv[i][0] > 'Z' && argv[i][0] < 'a') || argv[i][0] > 'z'))
			return 0;
		i++;
	}
	i = 0;
	while(argv[1][i]){
		if((argv[i][0] >= 'A' && argv[i][0] <= 'Z') || 
		(argv[i][0] >= 'a' && argv[i][0] <= 'z')){
			flag = 1;
			break;
		}
		i++;
	}
	if(flag == 1)
		rush2(argc,argv);
	return 0;
}
