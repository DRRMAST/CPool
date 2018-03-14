#include <stdio.h>
#include <unistd.h>

int my_strlen(const char *s1)
{
	int n = 0;  
    while(*s1++)   
    {  
        n++;      
    }  
    return n;  
}
int my_putstr ( char const * str ) 
{
	return write(1,str,my_strlen(str));
}
