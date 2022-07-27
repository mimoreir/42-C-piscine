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
#include <math.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
			;
		else
			return (0);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else
		return (0);
}

int	valid_base(char *base)
{
	if (ft_strcmp(base, "0123456789"))
		return (10);
	else if (ft_strcmp(base, "01"))
		return (2);
	else if (ft_strcmp(base, "0123456789ABCDEF"))
		return (16);
	else if (ft_strcmp(base, "poneyvif"))
		return (8);
	else
		return (0);
}

int	ft_convtonbr(char *str, char *base, int b)
{
	int	nbr;
	int	aux;
	int	i;

	aux = 0;
	nbr = 0;
	i = ft_strlen(str) -1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			aux = *str - '0';
			nbr = nbr + (base[aux] - '0') * pow (b, i);
		}
		else if (*str >= 'A' && *str <= 'F')
		{
			aux = *str - 'A' + 10;
			nbr = nbr + (base[aux] - 'A' + 10) * pow (b, i);
		}
		i--;
		str++;
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	b;

	b = valid_base(base);
	if (b != 0)
	{
		return (ft_convtonbr(str, base, b));
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