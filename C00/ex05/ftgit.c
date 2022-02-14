#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int x, int y, int z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	y = '1';
	z = '2';
	while (x < ('7' + 1))
	{
		while (y < ('8' + 1))
		{
			while (z < ('9' + 1))
			{
				ft_print(x, y, z);
				z++;
			}
			z = ++y + 1;
		}
		y = ++x ;
	}
}
