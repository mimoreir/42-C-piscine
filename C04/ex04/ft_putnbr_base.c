/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:30:40 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/26 09:30:42 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str++ != '\0')
	{
		x++;
	}
	return (x);
}

int	repeat_alpha(char *base)
{
	char	*a;

	while (*base)
	{
		a = base + 1;
		while (*a)
		{
			if (*a == *base)
				return (0);
			a++;
		}
		base++;
	}
	return (1);
}

int	valid_base(char *base)
{
	char	*a;

	a = base;
	if (ft_strlen(base) < 2)
		return (0);
	while (*a)
	{
		if (*a == '+' || *a == '-')
			return (0);
		a++;
	}
	if (repeat_alpha(base))
		return (ft_strlen(base));
	return (0);
}

void	ft_putnbr(int nbr, int b, char *base)
{
	int	x;

	x = 0;
	if (nbr > 0)
	{
		x = nbr % b;
		nbr = nbr / b;
		ft_putnbr(nbr, b, base);
		write(1, &base[x], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;

	b = valid_base(base);
	if (b)
	{
		if (nbr < 0)
		{
			nbr = nbr * (-1);
			write(1, "-", 1);
		}
		ft_putnbr(nbr, b, base);
	}
}

/*int	main(void)
{
	ft_putnbr_base(123,"0123456789ABCDEF");
	return (0);
}*/