#include <unistd.h>

void ft_putchar (char c )

{
	write (1,&c,1);

}

  int ft_putstr ( char* str)
{

	int i;

	i = 0;

	while  (str[i])
	{
		write (1,&str [i++],1);

	}

	return (0);

}


 int 	main () 

{

	ft_putstr ("Hello World");

	return (0);

}
