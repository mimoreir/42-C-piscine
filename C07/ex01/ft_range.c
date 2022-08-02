/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:54:53 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/28 16:54:55 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <malloc.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*list;
	int	*it;

	if (min >= max)
		return (NULL);
	list = malloc(sizeof(int) * (max - min));
	if (!list)
		return (NULL);
	it = list;
	while (min < max)
	{
		*it = min;
		min++;
		it++;
	}
	return (list);
}

/*int	main(void)
{
	int *c;
	int *aux;
	int	i;

	c = ft_range(0, 100);
	aux = c;
	i = 0;
	while (i <+ 100)
	{
		printf("%d ", *c);
		c++;
		i++;
	}
	free(aux);
	return (0);
}*/