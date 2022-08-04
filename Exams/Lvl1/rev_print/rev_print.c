/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:59:53 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/04 10:59:54 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
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
}

void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	rev_print(char *str)
{
	char	*a;
	char	*b;
	int		len;
	int		i;

	a = str;
	b = a;
	len = 0;
	i = 0;
	while (*b)
	{
		b++;
		len++;
	}
	b--;
	while (i < len / 2)
	{
		ft_swap(a, b);
		a++;
		b--;
		i++;
	}
	ft_putstr(str);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		rev_print(argv[1]);
	}
	else

	return 0;
}