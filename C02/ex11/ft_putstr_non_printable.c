/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:57:54 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/21 11:57:57 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	convtohex(char c)
{
	char unsigned	a;
	char unsigned	b;
	char			*base;

	base = "0123456789abcdef";
	a = c % 16;
	ft_putchar('\\');
	c = c / 16;
	if (c != 0)
	{
		b = c % 16;
		ft_putchar(base[b]);
		ft_putchar(base[a]);
	}
	else
	{
		ft_putchar(base[0]);
		ft_putchar(base[a]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_str_is_printable(*str))
			ft_putchar(*str);
		else
		{
			convtohex(*str);
		}
		str++;
	}
}

/*int		main(void)
{
	char	str[] = "Coucou\ntu vas bien\n ?";
	str[9] = 16;
	ft_putstr_non_printable(str);
}*/
