/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:53:31 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/03 16:53:32 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "ops.h"

int	ft_atoi(char *v)
{
	int	nbr;
	int	sign;

	sign = 1;
	nbr = 0;
	if (*v == '-')
	{
		sign = -1;
		v++;
	}
	while (*v)
	{
		nbr = nbr * 10 + (*v - '0');
		v++;
	}
	return (nbr * sign);
}
void	ft_doop(char *v1, char *op, char *v2)
{
	int	x;
	int	y;
	int	resul;

	x = ft_atoi(v1);
	y = ft_atoi(v2);
	if (*op == '+')
		resul = ADD(x, y);
	else if (*op == '-')
		resul = SUB(x, y);
	else if (*op == '*')
		resul = MUL(x, y);
	else if (*op == '/')
		resul = DIV(x, y);
	else if (*op == '%')
		resul = RES(x, y);
	printf("%d\n", resul);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		ft_doop(argv[1], argv[2], argv[3]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
