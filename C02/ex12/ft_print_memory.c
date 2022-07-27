/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:03:52 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/25 10:03:54 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	ft_print_adress(long int x, int i)
{
	unsigned long int	a;
	char				*base;

	base = "0123456789abcdef";
	if (x > 0 && i < 16)
	{
		i++;
		a = x % 16;
		x = x / 16;
		ft_print_adress(x, i);
		ft_putchar(base[a]);
	}
	else if (i < 16)
	{
		i++;
		ft_print_adress(x, i);
		ft_putchar(base[x]);
	}
}

void	convtohex(char c)
{
	unsigned char	a;
	unsigned char	b;
	char			*base;

	base = "0123456789abcdef";
	a = c % 16;
	c = c / 16;
	if (c != 0)
	{
		b = c % 16;
		ft_putchar(base[b]);
		ft_putchar(base[a]);
	}
	else
	{
		ft_putchar(base[a]);
	}
}

void	ft_printconthex(char *a)
{
	int	i;

	i = 0;
	while (*(char *) a && i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		convtohex(*(char *) a);
		a++;
		i++;
	}
	if (i == 16)
		write(1, " ", 2);
	else
	{
		while (i < 16)
		{
			i++;
			write(1, "  ", 2);
		}
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void			*a;
	unsigned int	i;

	a = addr;
	ft_print_adress(*(long int *) &addr, 0);
	write(1, ":", 2);
	ft_printconthex(a);
	i = 0;
	while (*(char *) a && i < size)
	{
		ft_putchar(*(char *) a);
		a++;
		i++;
	}
	write(1, "\n", 1);
	return (addr);
}

/*int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_print_memory(argv[i], 16);
			i++;
		}
	}
	return (0);
}*/
