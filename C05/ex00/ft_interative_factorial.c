/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:31:43 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/27 13:31:46 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_interative_factorial(int nb)
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
	printf("%d\n", ft_interative_factorial(10));
	return (0);
}*/