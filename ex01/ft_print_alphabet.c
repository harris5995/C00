#include <unistd.h>

void ft_putchar(char c);

void	ft_print_alphabet(void)
{
int i = 97;
while (i >= 97 && i <= 122)
{
	ft_putchar(i++);
	ft_putchar('\n');
}
}
