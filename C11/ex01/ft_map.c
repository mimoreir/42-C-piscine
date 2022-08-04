/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:15:57 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/02 15:15:58 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int	i;
	int	*it;

	i = 0;
	it = tab;
	while (i < length)
	{
		*it = f(*it);
		it++;
		i++;
	}
	return (tab);
}

/*int	ft_test(int x)
{
	return (x + 1);
}

int		main(void)
{
	int		tab[50];
	int		i;

	i = 0;
	while (i < 50)
	{
		tab[i] = i;
		i++;
	}
	i = 0;
	while (i < 50)
	{
		printf("%d-", tab[i]);
		i++;
	}
	printf("\n");
	ft_map(tab, 50, &ft_test);
	i = 0;
	while (i < 50)
	{
		printf("%d-", tab[i]);
		i++;
	}
	return (0);
}*/