/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:08:03 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/04 11:08:04 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			n = (*str - 'a') + 1;
		else if (*str >= 'A' && *str <= 'Z')
			n = (*str - 'A') + 1;
		while (i < n)
		{
			ft_putchar(*str);
			i++;
		}
		str++;
		i = 0;
		n = 1;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}

	ft_putchar('\n');
	return 0;
}
