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
	if (*s1 == '\0' && *s2 =='\0')
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

void	ft_putnbr(int nbr, int b, char *base)
{
	int	x;

	x = 0;
	if(nbr > 0)
	{
		x = nbr % b;
		nbr = nbr / b;
		ft_putnbr(nbr, b, base);
		write(1, &base[x], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int 	b;

	b = 0;
	if(valid_base(base))
	{
		b = valid_base(base);
		if (nbr < 0)
		{
			nbr = nbr * (-1);
			write(1, "-", 1);
		}
		ft_putnbr(nbr, b, base);
	}
}

int	main(void)
{
	ft_putnbr_base(-65536,"0123456789ABCDEF");
	return (0);
}