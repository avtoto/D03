#include <unistd.h>

  void ft_putchar( char c )
{
	write (1, &c ,1);
}
		
   int ft_strlen (char* str)
{

	int len;

	len = 0;

	while (str[len])

	{
		write (1,&str[len++],1);
	}
	
return (len);
}

int main ()
{
	 int len;
	 len = ft_strlen ("Hello World");
	 return (0);

}
