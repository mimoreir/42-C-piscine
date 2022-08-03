/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:25:45 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/01 16:25:47 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	write(1, "\n", 1);
}

int	digits(int nb)
{
	int	y;

	y = 0;
	while (nb)
	{
		y++;
		nb = nb / 10;
	}
	return (y);
}

void	ft_putnbr(int nb)
{
	char	x[11];
	int		aux;
	int		bufs;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		aux = digits(nb);
		bufs = aux;
		if (nb < 0)
		{
			nb = nb * (-1);
			ft_putchar('-');
		}
		x[aux] = '\0';
		while (aux)
		{
			aux--;
			x[aux] = nb % 10 + '0';
			nb = nb / 10;
		}
		write(1, &x, bufs);
	}
}

void	ft_show_tab(struct s_stock_str *tab)
{
	int	i;

	i = 0;
	while (tab[i].str != 0)
	{
		ft_putstr(tab[i].str);
		ft_putnbr(tab[i].size);
		ft_putstr(tab[i].copy);
		i++;
	}
}

/*int	main(int argc, char **argv)
{
 	t_stock_str	*tab;

 	tab = ft_strs_to_tab(argc, argv);
 	ft_show_tab(tab);
 	return (0);
}*/