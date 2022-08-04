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
	int	i;

	i = 0;
	a = tab;
	while (i <= size)
	{
		b = a;
		while (b <= tab + (size - 1))
		{
			if (*a > *b)
				ft_swap(a, b);
			b++;
		}
		i++;
		a++;
	}
}

/*int	main(void)
{
	int tab[20] = {1,91,3,4,5,6,7,0,-9,155,781,1998,19554,17,18,15,12,514,41,52};
	ft_sort_int_tab(tab,20);
	int i = 0;
	while (i < 20)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/