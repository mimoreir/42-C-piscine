/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:22:06 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/19 08:58:39 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_c(char a, char b, char c, char d)
{
	if (a <= '9' && b < '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (a == '9' && b == '8' && c == '9' && d == '9')
			;
		else
			write(1, ", ", 2);
	}
}

void	aux(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		if (d > '9')
			d = '0';
		while (c <= '9')
		{
			print_c(a, b, c, d);
			if (d == '9')
			{
				d = '0';
				c++;
			}
			else
				d++;
		}
		if (b == '9')
		{
			a++;
			b = '0';
		}
		else
			b++;
		c = a;
		d = b + 1;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	aux(a, b, c, d);
}

