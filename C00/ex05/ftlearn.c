#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_numbers(int x, int y, int z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_combo(void)
{
	int x;
	int y;
	int z;

	x = '0';
	y = '1';
	z = '2';

	while (z < ('8' + 1))
	{
		ft_numbers(x, y, z);
		x++;
	}
}
int main(void)
{
	ft_print_combo();
	return (0);
}
