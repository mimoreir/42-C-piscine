/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:08:31 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/27 14:08:33 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	count;

	count = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power)
	{
		count = count * nb;
		power --;
	}
	return (count);
}

/*int main(void)
{
	printf("%d\n", ft_iterative_power(2,-2));
	return (0);
}*/