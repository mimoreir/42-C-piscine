/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:46:58 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/31 12:47:00 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while (nb)
	{
		fac = fac * nb;
		nb--;
	}
	return (fac);
}

/*int main(void)
{
	printf("%d\n", ft_iterative_factorial(10));
	return (0);
}*/
