/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:10:36 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/25 17:10:38 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

char	*spaces(char *str)
{
	while ((*str >= 9 && *str <= 13) || (*str == 32))
	{
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	str = spaces(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			i++;
		}
		str++;
	}
	if (*str < '0' || *str > '9')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		n = (n * 10) + (*str - '0');
		str++;
	}
	if (i % 2 == 0)
		return (n);
	else
		return (n * -1);
}

/*int	main(int argc, char *argv[])
{
	int x;
	if (argc == 2)
	{
		x=ft_atoi(argv[1]);
		printf("%d\n", x);
	}
	return (0);
}*/