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
	i = 1;
	size = size / 2;
	b = tab;
	while (++i <= size)
	{
		ft_swap(b, a);
		b++;
		a--;
	}
}

