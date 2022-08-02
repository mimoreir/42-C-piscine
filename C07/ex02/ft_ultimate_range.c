/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:45:41 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/29 13:45:43 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*list;
	int	*it;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	list = malloc(sizeof(int) * ((max - min) + 1));
	if (!list)
		return (-1);
	it = list;
	i = 0;
	while (min < max)
	{
		*it = min;
		min++;
		it++;
		i++;
	}
	*range = list;
	return (i);
}

/*int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;
	
	i = 0;
	min = -8;
	max = 9;
	size = ft_ultimate_range(&tab, min, max);
	printf("%d\n", size);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/