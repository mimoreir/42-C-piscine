/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:35:36 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/02 16:35:37 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "ft_operations.h"

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

int	valid_operator(char *op)
{
	int		len;
	char	*o;

	len = 0;
	o = op;
	while (*o)
	{
		len++;
		o++;
	}
	if (len > 1)
		return (0);
	if (*op == '+' || *op == '-' || *op == '*'
		|| *op == '/' || *op == '%')
		return (1);
	return (0);
}

void	ft_doop(char *v1, char *op, char *v2)
{
	int	x;
	int	y;
	int	res;

	x = ft_atoi(v1);
	y = ft_atoi(v2);
	res = 0;
	if (!valid_operator(op))
		write(1, "0\n", 2);
	else
	{
		if (*op == '+')
			res = SUM(x,y);
		else if (*op == '-')
			res = SUB(x,y);
		else if (*op == '*')
			res = MUL(x,y);
		else if (*op == '/')
			res = DIV(x,y);
		if (*op == '%')
			res = RES(x,y);
	}
	printf("%d", res);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		ft_doop(argv[1], argv[2], argv[3]);
	}
	return (0);
}