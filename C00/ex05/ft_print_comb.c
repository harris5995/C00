/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdzulkar <hdzulkar@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:24:16 by hdzulkar          #+#    #+#             */
/*   Updated: 2022/02/14 15:36:14 by hdzulkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void cm_putchar(char x, char y, char z)
{
ft_putchar(x);
ft_putchar(y);
ft_putchar(z);
}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;
	a = 0;
	while(a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{		
			c = b + 1;
			while(c <= '9')
			{
				cm_putchar(a, b, c);
				{
					if(a != '7' || b != '8' || c != '9')
					{
						ft_putchar (',');
						ft_putchar(' ');
					}
					c++;
				}
				b++;
			}
			a++;
		}
	}
}
