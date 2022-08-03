/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:38:22 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/01 15:38:23 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str++ != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strcpy(char *src)
{
	char	*dest;
	char	*it;

	dest = malloc(ft_strlen(src)+ 1);
	if (!dest)
		return (NULL);
	it = dest;
	while (*src)
	{
		*it = *src;
		it++;
		src++;
	}
	*it = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	t_stock_str	*it;
	int			i;

	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	it = tab;
	i = 0;
	while (i < ac)
	{
		it[i].size = ft_strlen(av[i]);
		it[i].str = ft_strcpy(av[i]);
		it[i].copy = ft_strcpy(av[i]);
		i++;
	}
	it[i].size = 0;
	it[i].str = 0;
	it[i].copy = 0;
	return (tab);
}

/*typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;*/