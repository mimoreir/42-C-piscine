/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:10:50 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/04 12:10:51 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	repeat(char *a, char *b)
{
	while (a != b)
	{
		if(*a == *b)
			return (1);
		a++;
	}
	return (0);
}

void	inter(char *a, char *b)
{
	char	*c;
	char	*d;

	c = a;
	d = b;
	while (*a && *b)
	{
		while (*b)
		{
			if(*a == *b)
			{
				if (!repeat(c, a))
					ft_putchar(*a);
				break ;
			}
			b++;
		}
		b = d;
		a++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return 0;
}