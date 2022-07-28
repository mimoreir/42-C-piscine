/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:55:37 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/27 09:55:39 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	count;

	count = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power)
	{
		count = count * nb;
		power --;
	}
	return (count);
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
	int		i;

	i = 0;
	a = base;
	while (*a)
	{
		i++;
		a++;
	}
	if (i < 2)
		return (0);
	a = base;
	while (*a)
	{
		if (*a == '+' || *a == '-')
			return (0);
		a++;
	}
	if (repeat_alpha(base))
		return (i);
	return (0);
}

int	ft_convtonbr(char *str, int b)
{
	int		res;
	int		i;
	char	*a;
	int		aux;

	res = 0;
	i = 0;
	a = str;
	aux = 0;
	while (*a)
	{
		i++;
		a++;
	}
	while (*str)
	{
		aux = *str % b;
		res = res + aux * ft_iterative_power(b, i - 1);
		i--;
		str++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	b;

	b = valid_base(base);
	if (b != 0)
	{
		return (ft_convtonbr(str, b));
	}
	else
		return (0);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	}
	return (0);
}*/