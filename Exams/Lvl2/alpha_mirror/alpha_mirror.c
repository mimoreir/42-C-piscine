/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:03:35 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/03 17:03:36 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'M')
			*str = 'Z' - (*str - 'A');
		else if (*str >= 'a' && *str <= 'm')
			*str = 'z' - (*str - 'a');
		else if (*str >= 'N' && *str <= 'Z')
			*str = 'A' + ('Z' - *str);
		else if (*str >= 'n' && *str <= 'z')
			*str = 'a' + ('z' - *str);
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}