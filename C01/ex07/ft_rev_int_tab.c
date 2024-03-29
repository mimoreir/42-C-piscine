/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:32:44 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/19 12:32:47 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*a;
	int	*b;
	int	i;

	a = tab + (size - 1);
	i = 0;
	size = size / 2;
	b = tab;
	while (i < size)
	{
		ft_swap(b, a);
		b++;
		a--;
		i++;
	}
}

/*int	main(void)
{
	int tab[10] = {0,1,3,4,5,6,7,8,9,10};
	ft_rev_int_tab(tab,10);
	int i = 0;
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/