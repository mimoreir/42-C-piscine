/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:01:30 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/19 15:01:34 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int*b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*a;
	int	*b;
	int	con;
	int	con2;

	con = 0;
	a = tab;
	while (con <= size)
	{
		con2 = con + 1;
		b = a;
		while (con2 <= size)
		{
			if (*b < *a)
				ft_swap(a, b);
			b++;
			con2++;
		}
		con++;
		a++;
	}
}
