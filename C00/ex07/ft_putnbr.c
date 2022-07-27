/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:47:49 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/18 11:11:34 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
