#include <stdio.h>
#include <unistd.h>

int my_putchar(char c);
void print_space(int size)
{
	int i = 0;
	while(i < size)
	{
		my_putchar(' ');
		i++;
	}
}
void print_leaf_line(int size)
{
	int i = 0;
	while(i < size)
	{
		my_putchar('*');
		i++;
	}
	my_putchar('\n');
}
void print_trunk_line(int size)
{
	int i = 0;
	while(i < size)
	{
		my_putchar('|');
		i++;
	}
	my_putchar('\n');
}
void print_trunk(int size,int max)
{
	int i = 0;
	int space; 
	space = max / 2 - (size / 2);
	while(i < size)
	{
		print_space(space);
		print_trunk_line(size);
		i++;
	}
}

void print_tier(int tn,int leaf,int max)
{
	int i = 1;
	int space;
	while(i <= tn + 3)
		{
			space = max / 2 - leaf / 2;
			print_space(space);
			print_leaf_line(leaf);
			leaf = leaf + 2;
			i++;
		}
}
int cal_max(int size)
{
	int i = 1;
	int j = 1;
	int max = 1;
	int l_max = 1;
	while(i <= size)
	{
		j = 1;
		max = l_max;
		while(j < i + 3)
		{
			max = max + 2;
			j++;
		}
		
		i++;
		l_max = max - (i / 2) * 2;		
	}
	return max;
}
void tree(int size)
{
	int i = 1,j = 1;
	int first_line = 1;
	int max,space,leaf;
	max = cal_max(size);
	int leaf_max = 7;
	while(i <= size)
	{
		leaf = first_line;
		print_tier(i,leaf,max);
		first_line = leaf_max - ((i + 1) / 2) * 2;
		i++;
		leaf_max = cal_max(i);
		
	}
	print_trunk(size,max);
}
