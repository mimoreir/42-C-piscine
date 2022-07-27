/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:31:12 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/27 17:31:13 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <math.h>
int	ft_sqrt(int nb)
{
	int result;
	int i;

	i = 0;
	result = 0;
	if (nb < 1)
		return(0);
	if (nb == 1)
		return (nb);
	else
	{
		while (result <= nb)
		{
			i++;
			result = i * i;
		}
		return (i -1);
	}
	return (0);
}

int main(void)
{
	printf("%f\n", sqrt(144));
	printf("%d\n", ft_sqrt(144));
	return (0);
}