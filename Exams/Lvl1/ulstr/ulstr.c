/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:19:17 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/04 11:19:18 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		else if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		ft_putchar(*str);
		str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ulstr(argv[1]);
	}
	ft_putchar('\n');
	return 0;
}