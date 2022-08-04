/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:40:01 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/04 15:40:02 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	m;

	i = 0;
	m = 0;
	while (i < len)
	{
		if(*tab > m)
			m = *tab;
		i++;
		tab++;
	}
	return (m);
}

int main(void)
{
	int	tab[10] = {45,1,123,421,43,3000,342,1,23,1000};

	printf("%d\n", max(tab, 10));
	return (0);
}
