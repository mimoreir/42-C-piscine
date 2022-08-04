/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:44:33 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/04 10:44:34 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			*str = *str + 13;
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
			*str = *str - 13;
		ft_putchar(*str);
		str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		rot_13(argv[1]);
	}
	else
		ft_putchar('\n');
	return 0;
}
